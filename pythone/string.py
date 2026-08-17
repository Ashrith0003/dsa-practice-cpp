import sys


def caesar_cipher(text, shift):
    result = ""

    for char in text:
        if char.isalpha():
            # Handle uppercase letters
            if char.isupper():
                result += chr((ord(char) - ord('A') + shift) % 26 + ord('A'))

            # Handle lowercase letters
            else:
                result += chr((ord(char) - ord('a') + shift) % 26 + ord('a'))

        else:
            # Keep spaces, numbers and special characters unchanged
            result += char

    return result


def main():
    # Get input from command line
    if len(sys.argv) >= 3:
        text = sys.argv[1]
        shift = sys.argv[2]
    else:
        text = input("Enter the message: ")
        shift = input("Enter the shift key: ")

    # Validate shift key
    if not shift.lstrip("-").isdigit():
        print("Error: Shift key must be an integer.")
        return

    shift = int(shift)

    # Ask user for operation
    operation = input("Enter 'encode' or 'decode': ").lower()

    if operation == "decode":
        shift = -shift
    elif operation != "encode":
        print("Error: Choose either 'encode' or 'decode'.")
        return

    result = caesar_cipher(text, shift)

    print("Result:", result)


if __name__ == "__main__":
    main()