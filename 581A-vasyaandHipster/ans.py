a, b = map(int, input().split())

ans1 = min(a, b)

if a < b :
    b = b - ans1
    ans2 = b//2
else :
    a  = a - ans1
    ans2 = a//2

print(ans1,ans2)