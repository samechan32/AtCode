import itertools
N, M = map(int, input().split())
AB = [tuple(map(int, input().split())) for i in range(M)]
K = int(input())
CD = [tuple(map(int, input().split())) for i in range(K)]
ans = 0

for b in itertools.product(*CD):
    conv = set(b)
    count = sum(A in conv and B in conv for A, B in AB)
    if ans < count:
        ans = count
print(ans)




