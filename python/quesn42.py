#  An n-digit number that is the sum of the nth powers of its digits
#  is called an Armstrong number
#  To determine a number is an Armstrong number or not we find the sum of nth power
#  of individual digits and check whether the sum and the original number are the same


def sumOfNthPowerOfIndividualDigits(n: int) -> int:
    # a function that returns the sum of cube of individual digits of n
    digitsInN = findDigits(n)
    noOfDigits = len(digitsInN)
    sum = 0
    for digit in digitsInN:
        print(digit)
        temp = nthPower(digit, noOfDigits)
        sum += temp
        print(sum)
    return sum


def findDigits(n: int) -> list:
    # a function which takes a positive integer n as input and returns a list
    # containing all the digits that are present in n
    digitsInN = []
    while n > 0:
        digitsInN.append(n % 10)
        n = n // 10
    digitsInN.reverse()
    return digitsInN


def nthPower(a: int, n: int) -> int:
    # a function that returns nth power of a
    result = 1
    for i in range(n):
        result *= a
    return result


def main() -> None:
    # driver function

    inputNumber = int(input("Enter your input here: "))
    sumOfNthPowerOfIndividualDigitsOfInputNumber = sumOfNthPowerOfIndividualDigits(
        inputNumber)
    if inputNumber == sumOfNthPowerOfIndividualDigitsOfInputNumber:
        print("The number you entered is an Armstrong number")
    else:
        print("The number you entered is not an Armstrong number")


if __name__ == "__main__":
    main()
