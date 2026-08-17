def quick_sort(self, arr: List[int]) -> List[int]:
    if len(arr) <= 1:
        return arr

    left = []
    right = []
    middle = []

    pivot = arr[-1]

    for i in range(len(arr)):

        if i < pivot :
            left.append(i)

        elif i == pivot:
            middle.append(i)

        else:
            right.append(i)


    return (
        self.quick_sort(left)
        + middle
        + self.quick_sort(right)
    )

        