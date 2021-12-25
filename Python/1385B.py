from sys import stdin

def solve(n, arr):
    res = []

    for i in arr:
        if i not in res:
            res += [i]

    print(*res)


t = int(stdin.readline())

for _ in range(t):
	n = int(stdin.readline())
	arr = list(map(int, stdin.readline().rstrip().split()))

	solve(n, arr)