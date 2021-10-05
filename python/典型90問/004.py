H, W = map(int, input().split())
A = [[int(d) for d in input().split()] for _ in range(H)]
rows = []
col = []

for h in range(H):
    s = 0
    for w in range(W):
        s += A[h][w]
    rows.append(s)

for w in range(W):
    c = 0
    for h in range(H):
        c += A[h][w]
    col.append(c)

for h in range(H):
    ans = []
    for w in range(W):
        ans.append(rows[h] + col[w] - A[h][w])
    print(*ans)
