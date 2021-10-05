n = int(input())
A = list(map(int, input().split()))
ans = 1

A.sort()

for i in range(len(A)):
    ans *= A[i]
    if(ans > 10 ** 18):
        ans = -1
        break

print(ans)
