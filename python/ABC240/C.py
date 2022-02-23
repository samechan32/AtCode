import itertools as it
n, x = map(int, input().split())
a = []
b = []
for i in range(n):
    A, B = map(int, input().split())
    a.append(A)
    b.append(B)

dp = [[False] * (x + 1) for i in range(n+1)]
dp[0][0] = True
for i in range(n):
    for j in range(x+1):
        if(dp[i][j]):
            if(j + a[i] <= x):
                dp[i + 1][j + a[i]] = True
            if j + b[i] <= x:
                dp[i + 1][j + b[i]] = True

if dp[n][x]:
    print("Yes")
else:
    print("No")
