from sys import stdin

def solve(n,d,arr):
    for i in range(n):
        g = next(x for x, j in enumerate(arr) if j-arr[i]>=d)
        print(g)


n, d = list(map(int, stdin.readline().rstrip().split()))
arr = list(map(int, stdin.readline().rstrip().split()))

solve(n,d,arr)