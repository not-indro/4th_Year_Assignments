class EightQueens:
    def __init__(self, size):
        self.size = size
        self.board = [[0 for _ in range(size)] for _ in range(size)]
        self.solutions = []

    def is_safe(self, row, col):
        # Check if there is a queen in the same row
        if any(self.board[row]):
            return False

        # Check if there is a queen in the same column
        if any(self.board[i][col] for i in range(self.size)):
            return False

        # Check if there is a queen in the upper-left to lower-right diagonal
        if any(self.board[i][j] for i, j in zip(range(row, -1, -1), range(col, -1, -1))):
            return False

        # Check if there is a queen in the upper-right to lower-left diagonal
        if any(self.board[i][j] for i, j in zip(range(row, -1, -1), range(col, self.size))):
            return False

        return True

    def solve(self, row):
        if row == self.size:
            # All queens are placed successfully
            self.solutions.append([row[:] for row in self.board])
            return

        for col in range(self.size):
            if self.is_safe(row, col):
                # Place queen and recursively solve for the next row
                self.board[row][col] = 1
                self.solve(row + 1)
                # Backtrack
                self.board[row][col] = 0

    def find_solutions(self):
        self.solve(0)

    def display_solutions(self):
        for solution in self.solutions:
            print("Solution:")
            for row in solution:
                print(" ".join("Q" if cell else "." for cell in row))
            print()


# Create an instance of EightQueens and find solutions
eight_queens = EightQueens(8)
eight_queens.find_solutions()

# Display all solutions
eight_queens.display_solutions()