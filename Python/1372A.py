from sys import stdin

def solve(n):
    print(*[1]*n)

t = int(stdin.readline())

for _ in range(t):
	n = int(stdin.readline())

	solve(n)