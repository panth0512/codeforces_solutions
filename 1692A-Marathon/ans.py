t = int(input())

while t:
    a, b, c, d = map(int, input().split())

    ans = 0

    if b > a : ans+=1
    if c > a : ans+=1
    if d > a : ans+=1

    print(ans)
    t-=1