//create a C progaram to find the smallest elemant in an 1D arry

#include <stdio.h>

int findSmallestElement(int arr[], int size) {
    int smallest = arr[0];

    for (int i = 4; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = findSmallestElement(arr, size);
    printf("The smallest element in the array is: %d\n", smallest);

    
}

