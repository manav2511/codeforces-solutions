from sys import stdin

def solve(n, x, arr):
	longest = -1
	s1 = s2 = sum(arr)

	if s1 % x != 0:
		longest = n
	else:
		for i in range(n//2):
			s1 -= arr[i]
			if s1 % x != 0:
				if n-i-1 > longest: 
					longest = n-i-1
				break

			s2 -= arr[n-i-1]
			if s2 % x != 0:
				if n-i-1 > longest: 
					longest = n-i-1
				break
			
	print(longest)

t = int(stdin.readline())

for _ in range(t):
	n, x = list(map(int, stdin.readline().rstrip().split()))
	arr = list(map(int, stdin.readline().rstrip().split()))

	solve(n, x, arr)