from fractions import Fraction


def row_echelon(n: int, m: int, matrix: list[list[Fraction]]):
    """Convert the matrix to row-echelon form using Gaussian Elimination method"""
    # Check if matrix is in correct format
    if len(matrix) != n:
        print("Invalid Matrix")
        exit()
    for _ in matrix:
        if len(_) != m:
            print("Invalid Matrix")
            exit()
    
    # Print read Matrix
    print("Matrix:")
    show(matrix)

    print("Steps:")

    # Convert matrix to Echelon form
    diag = min(n, m)
    for i in range(diag):
        change, col = 0, i

        # Check if the row has zero at (i,i)
        if matrix[i][i] == Fraction(0):
            matrix, col = to_last_row(matrix, i, i)

        for j in range(i + 1, n):
            if matrix[j][col] != Fraction(0):
                val = matrix[j][col] / matrix[i][col]
                print("R", j+1, " -> R", j+1, " - ", frac2str(val), "*R", i+1, sep="")
                for l in range(m):
                    matrix[j][l] -= val * matrix[i][l]
                change = 1
        if change == 1:
            show(matrix)

    return matrix


def to_last_row(matrix: list[list[Fraction]], row: int, col: int):
    """Move the row to last_row if it has zero at (row,col)"""
    change = 0
    for k in range(len(matrix)-1, row, -1):
        if matrix[k][col] != Fraction(0):
            print("R", row+1, " <-> R", k+1, sep="")
            matrix[row], matrix[k] = matrix[k], matrix[row]
            change = 1
            break
    if change == 1:
        show(matrix)
        return (matrix, col)
    elif col < len(matrix[0])-1:
        return to_last_row(matrix, row, col+1)
    else:
        return (matrix, col)


def frac2str(a: Fraction):
    """Convert Fraction to String"""
    if a.denominator == 1:
        return str(a.numerator)
    else:
        return str(a.numerator)+"/"+str(a.denominator)


def show(matrix: list[list[Fraction]]):
    """Print the matrix in row-wise format"""
    for row in matrix:
        print("    [", *row, "]", sep=" ")
    print()


if __name__ == "__main__":
    n = int(input("Enter number of rows: "))
    m = int(input("Enter number of columns: "))

    # Read matrix row-wise from input
    matrix = []
    print("Enter Matrix: ")
    for i in range(n):
        row_i = list(map(Fraction, input(f"    row{i+1}: ").split()))
        matrix.append(row_i)

    matrix = row_echelon(n, m, matrix)

    # Print Row Echelon form
    print("Row Echelon form:")
    show(matrix)
