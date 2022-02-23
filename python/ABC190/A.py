A, B, C = map(int, input().split())

ans = ""
if A > B:
    ans = "Takahashi"
elif A < B:
    ans = "Aoki"
elif A == B and C == 0:
    ans = "Aoki"
else:
    ans = "Takahashi"
print(ans)
