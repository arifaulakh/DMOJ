n = int(input())
total = 0
while (n !=1):
    if n%2 == 0:
        n = n/2
        total += 1
    else:
        n = n*3 + 1
        total += 1
    if n == 1:
        break
print(total)