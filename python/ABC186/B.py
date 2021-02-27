H, W = map(int, input().split())
ans = 0
minb=10000
A = []
for i in range(H):
    A.extend(list(map(int, input().split())))

A.sort(reverse=True)

for i in A:
    ans += i - A[len(A) - 1]
print(ans)