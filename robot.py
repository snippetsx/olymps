import random

def create_random_matrix(rows, cols, min_val=0, max_val=9):
    return [[random.randint(min_val, max_val) for _ in range(cols)] for _ in range(rows)]


def collect_max_coins(matrix):
    if not matrix or not matrix[0]:
        return 0

    rows, cols = len(matrix), len(matrix[0])
    dp = [[0 for _ in range(cols)] for _ in range(rows)]

    dp[0][0] = matrix[0][0]

    for i in range(1, rows):
        dp[i][0] = dp[i-1][0] + matrix[i][0]


    for j in range(1, cols):
        dp[0][j] = dp[0][j-1] + matrix[0][j]

    for i in range(1, rows):
        for j in range(1, cols):
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + matrix[i][j]

    return dp[-1][-1]

x = create_random_matrix(9, 9)
x[0][0] = 0
for row in x:
    print(row)

print(collect_max_coins(x))