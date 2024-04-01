size = int(input("Enter how many elements do you want to add: "))
arr = [0] * size
for i in range(size):
    arr[i] = int(input("Enter the element " + str(i+1) + ": "))


print("Inputted Elements are: ")
for i in arr:
    print(i, end=" ")