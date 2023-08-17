#include <stdio.h>
#include <math.h>

// int binarySearch(int array[], int x, int low, int high) {
//   while (low <= high) {
//     int mid = low + (high - low) / 2;
//     if (array[mid] == x)
//       return mid;
//     if (array[mid] < x)
//       low = mid + 1;
//     else
//       high = mid - 1;
//   }

//   return 0;
// }

int binarySearch(int array[], int x);
int len(int Array[]);

int main(void) {
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int x = 7;

    int result = binarySearch(array, x);

    if (result)
        printf("Element is found");
    else
        printf("Not found");
        
    return 0;
}

int binarySearch(int array[], int x) {
    int p = 0;
    int q = len(array)-1;

    while (p <= q) {
        int mid = ceil((p+q)/2);
        if (array[mid] == x)
            return 1;
        if (array[mid] < x)
            p = mid + 1;
        else
            q = mid - 1;
    }

    return 0;
}

int len(int Array[]) {
    int cnt= 0, i;
    for(i=0; Array[i]!='\0'; i++)
        cnt++;
    return cnt;
}
