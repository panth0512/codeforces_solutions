t = int(input())

while t:
    n, x = map(int, input().split())

    dist = list(map(int, input().split()))

    tanksize = dist[0] - 0
    for i in range(1, n):
        tanksize =  max(dist[i] - dist[i-1], tanksize)
    
    tanksize = max((x-dist[n-1])*2, tanksize)

    print(tanksize)

    t-=1