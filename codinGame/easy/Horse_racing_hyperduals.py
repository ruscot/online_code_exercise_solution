import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())
numbers = []
for i in range(n):
    v, e = [int(j) for j in input().split()]
    numbers.append((v,e))
# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)
result = -1
for i in range(len(numbers)):
    for j in range(i+1, len(numbers)):
        d = abs(numbers[i][0]-numbers[j][0]) + abs(numbers[i][1]-numbers[j][1]) 
        if result == -1 or result > d:
            result = d
print(result)
#print("42")

