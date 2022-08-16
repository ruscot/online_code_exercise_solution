import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

lon = input()
lat = input()
lon = lon.replace(",", ".")
lat = lat.replace(",", ".")
n = int(input())
response = ["", -1]
for i in range(n):
    defib = input()
    l = defib.split(";")
    xdefib = l[-2].replace(",", ".")
    ydefib = l[-1].replace(",", ".")

    distance = math.sqrt(((float(lon)-float(xdefib))*math.cos((float(lon)+float(xdefib))/2))**2 + (float(lat)-float(ydefib))**2)
    if response[1] == -1:
        response[0] = l[1]
        response[1] = distance
    elif distance < response[1]:
        response[0] = l[1]
        response[1] = distance
# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

print(response[0])
