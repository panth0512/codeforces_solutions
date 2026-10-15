t = int(input())

while t :
    n = int(input())

    arr = list(map(int, input().split()))
    ecnt = 0
    ocnt = 0

    for i in range(n):
        x = arr[i]

        if x%2 == 0 :
            ecnt = ecnt + 1
        else:
            ocnt = ocnt + 1
    
    if (ocnt%2 != 0 and ecnt%2 !=0) or (ocnt%2 != 0 and ecnt%2 ==0):
        print("NO")
    else:
        print("YES")

    t-=1
