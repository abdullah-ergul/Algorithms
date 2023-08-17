def binarySearch(array, x):
    p = 1
    q = len(array)-1

    while p <= q:

        mid = p + (q - p)//2

        if array[mid] == x:
            return 1

        if array[mid] < x:
            p = mid + 1

        else:
            q = mid - 1

    return 0


array = [3, 4, 5, 6, 7, 8, 9]
x = 7

result = binarySearch(array, x)

if result:
    print("Element is found")
else:
    print("Not found")