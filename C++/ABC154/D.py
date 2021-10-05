n, k = map(int, input().split())
p = list(map(int, input().split()))

ans = 0
c = 0
z = 0
for i in range(n-k):
    for x in range(i,i+k):
        P = p[x]
        c += sum([x for i in range(1,P)])
        c /= P
        z = c
        c = 0
    if ans < z:
        ans = z
    z = 0
print(ans)
        
