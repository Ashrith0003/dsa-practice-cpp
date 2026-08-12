from typing import List


def strassen_multiply(A: List[List[int]],
                      B: List[List[int]]) -> List[List[int]]:

    # Check matrices
    if not A or not B:
        raise ValueError("Matrices cannot be empty")

    n = len(A)

    if len(A[0]) != n or len(B) != n or len(B[0]) != n:
        raise ValueError("Matrices must be square and have the same size")

    # Find next power of 2
    size = 1
    while size < n:
        size *= 2

    # Pad matrices with zeros
    def pad(M):
        return [
            M[i] + [0] * (size - len(M[i]))
            for i in range(len(M))
        ] + [
            [0] * size for _ in range(size - len(M))
        ]

    A_pad = pad(A)
    B_pad = pad(B)

    # Strassen recursive multiplication
    def strassen(X, Y):

        n = len(X)

        # Base case
        if n == 1:
            return [[X[0][0] * Y[0][0]]]

        mid = n // 2

        # Divide matrices
        A11 = [row[:mid] for row in X[:mid]]
        A12 = [row[mid:] for row in X[:mid]]
        A21 = [row[:mid] for row in X[mid:]]
        A22 = [row[mid:] for row in X[mid:]]

        B11 = [row[:mid] for row in Y[:mid]]
        B12 = [row[mid:] for row in Y[:mid]]
        B21 = [row[:mid] for row in Y[mid:]]
        B22 = [row[mid:] for row in Y[mid:]]

        # Matrix addition
        def add(M, N):
            return [
                [M[i][j] + N[i][j] for j in range(mid)]
                for i in range(mid)
            ]

        # Matrix subtraction
        def subtract(M, N):
            return [
                [M[i][j] - N[i][j] for j in range(mid)]
                for i in range(mid)
            ]

        # 7 Strassen products
        P1 = strassen(add(A11, A22), add(B11, B22))
        P2 = strassen(add(A21, A22), B11)
        P3 = strassen(A11, subtract(B12, B22))
        P4 = strassen(A22, subtract(B21, B11))
        P5 = strassen(add(A11, A12), B22)
        P6 = strassen(subtract(A21, A11), add(B11, B12))
        P7 = strassen(subtract(A12, A22), add(B21, B22))

        # Calculate result quadrants
        C11 = add(subtract(add(P1, P4), P5), P7)
        C12 = add(P3, P5)
        C21 = add(P2, P4)
        C22 = add(subtract(add(P1, P3), P2), P6)

        # Combine quadrants
        result = []

        for i in range(mid):
            result.append(C11[i] + C12[i])

        for i in range(mid):
            result.append(C21[i] + C22[i])

        return result

    # Multiply
    result = strassen(A_pad, B_pad)

    # Remove padding
    return [row[:n] for row in result[:n]]


# Example
A = [
    [1, 2],
    [3, 4]
]

B = [
    [5, 6],
    [7, 8]
]

result = strassen_multiply(A, B)

print(result)