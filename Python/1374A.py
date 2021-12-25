from sys import stdin

def solve(x, y, n):
    if n % x == y:
        print(n)
    elif n % x > y:
        print(n-((n%x)-y))
    else:
        print(n-x+(y-(n%x)))


t = int(stdin.readline())

for _ in range(t):
	x, y, n = list(map(int, stdin.readline().rstrip().split()))

	solve(x, y, n)