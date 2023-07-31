def mergeSort(Arr):
    if len(Arr) == 1:
        return
    
    Arr1 = Arr[:len(Arr)//2]
    Arr2 = Arr[len(Arr)//2:]

    mergeSort(Arr1)
    mergeSort(Arr2)
    
    i = j = k = 0
 
    while i < len(Arr1) and j < len(Arr2):
        if Arr1[i] <= Arr2[j]:
            Arr[k] = Arr1[i]
            i += 1
        else:
            Arr[k] = Arr2[j]
            j += 1
        k += 1
 
    while i < len(Arr1):
        Arr[k] = Arr1[i]
        i += 1
        k += 1
 
    while j < len(Arr2):
        Arr[k] = Arr2[j]
        j += 1
        k += 1

Arr = [8,2,4,9,3]
mergeSort(Arr)
print(Arr)
