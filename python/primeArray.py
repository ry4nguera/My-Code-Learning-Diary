arr = [2, 3, 4, 7, 10, 13, 18, 19, 20, 29]
count = 0

for i in arr:
    flag = 0
    for j in range(2, i//2+1):
        if i % j == 0:
            flag = 1
            break
    if flag == 0:
        count += 1

print(count, "prime numbers are there in the array.")
