from sys import stdin
from math import gcd

def solve(a,b):
    if gcd(a,b) == 1:
        print("Finite")
    else:
        print("Infinite")

t = int(stdin.readline())

for _ in range(t):
	a,b = list(map(int, stdin.readline().rstrip().split()))

	solve(a,b)

# cnt = 0
    # val = [a,b] if a<b else [b,a]
    # n = 10**5
    # s = {0}
    # for i in range(n):
    #     if cnt >= val[0]:
    #         print("Finite")
    #         return
    #     elif i>=val[1]:
    #         if i-val[0] in s:
    #             s.add(i)
    #             cnt+=1
    #         elif i-val[1] in s:
    #             s.add(i)
    #             cnt+=1
    #         else:
    #             cnt=0
    #     elif i>=val[0]:
    #         if i-val[0] in s:
    #             s.add(i)
    #             cnt+=1
    #         else:
    #             cnt=0
    #     else:
    #         cnt=0

    # print("Infinite")
    # #print(arr[:30])
