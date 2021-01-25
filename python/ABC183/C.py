import itertools
N, K = map(int, input().split())
p = itertools.permutations(list(range(N)))
t = []
ans = 0
for i in range(N):
    s = list(map(int, input().split()))
    t.append(s)
for i in list(p):
    i += (0,)
    if i[0] == 0:
        count = 0
        for z in range(N):
            count += t[i[z]-1][i[z + 1]-1]
            if count > K:
                break
        if count == K:
            ans += 1

print(ans)