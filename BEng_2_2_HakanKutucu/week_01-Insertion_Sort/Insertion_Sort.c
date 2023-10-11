#include <stdio.h>
#include <stdlib.h>


void insertionSort(int Array[]) {
    int i, j, key;
    for(j=1 ; j<len(Array) ; j++) {
        key = Array[j];
        i = j-1;
        while(i >= 0 && Array[i] > key) {
            Array[i+1] = Array[i];
            i -= 1;
        }
        Array[i+1] = key;
    }
}

int len(int Array[]) {
    return sizeof(Array) / sizeof(int);
}

int main() {
    int i, Arr[] = {8,2,4,9,3,6};

    insertionSort(Arr);

    for(i=0; i<len(Arr); i++)
        printf("%d ", Arr[i]);

    return 0;
}