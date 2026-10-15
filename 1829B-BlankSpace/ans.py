t = int(input())

while t :

    n = int(input())

    a = list(map(int, input().split()))

    ans = 0
    cnt = 0
    for i in range(n):
        if a[i] == 0:
            cnt += 1
            ans = max(cnt, ans)
        else:
            cnt = 0

    print(ans)
    t-=1