#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void mergeSort(int Array[]);
int len(int Array[]);
int *combine(int Arr1[], int Arr2[]);


int main() {
    int i, Arr[] = {8,2,4,9,3};

    // printf("%f", ceil((float)len(Arr)/2));
    mergeSort(Arr);

    for(i=0; i<len(Arr); i++)
        printf("%d ", Arr[i]);

    return 0;
}


void mergeSort(int Array[]) {
    if (len(Array) == 1)
        return;

    int i,j;
    int *Arr1 = (int *)malloc(ceil((double)len(Array)/2) * sizeof(int));
    int *Arr2 = (int *)malloc(floor((double)len(Array)/2) * sizeof(int));

    for(i=0; i<ceil((float)len(Array)/2); i++)
        Arr1[i] = Array[i];
    for(j=0; j<floor((float)len(Array)/2); j++, i++)
        Arr2[j] = Array[i];
    
    mergeSort(Arr1);
    mergeSort(Arr2);

    if(Arr1[0] < Arr2[0])
        Array = combine(Arr1, Arr2);
    else
        Array = combine(Arr2, Arr1);
}

int len(int Array[]) {
    // return sizeof(Array) / sizeof(int);
    int cnt= 0, i;
    for(i=0; Array[i]!='\0'; i++)
        cnt++;
    return cnt;
}

int *combine(int Arr1[], int Arr2[]) {
    int *Array = (int *)malloc( (len(Arr1)+len(Arr2)) * sizeof(int) );
    int i,j;

    for(i=0; i<len(Arr1); i++)
        Array[i] = Arr1[i];
    for(j=0; j<len(Arr2); j++, i++)
        Array[i] = Arr2[j];

    return Array;
}
