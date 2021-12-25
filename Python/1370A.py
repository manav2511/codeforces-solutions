from sys import stdin

def solve(n):
    if n % 2 == 0: print(n//2)
    else: print((n//2)+1)

t = int(stdin.readline())

for _ in range(t):
	n = int(stdin.readline())

	solve(n)