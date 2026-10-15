
t = int(input())
while t:

    a, b, c = map(int, input().split())

    if a+b == c:
        print("+")
    else:
        print("-")

    t-=1