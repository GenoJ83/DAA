//Algorithm to find the maximum element in an array.
//Pseudo Code
/*1. Initialize max_element = arr[0]
2. Iterate through the array from index 1 to n-1
3. For each element, check if arr[i] > max_element
4. If true, update max_element = arr[i]
5. Return max_element
*/


//Implementation
#include <stdio.h>

int find_max(int arr[], int n) {
    int max_element = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }
    return max_element;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_element = find_max(arr, n);
    printf("Maximum element: %d\n", max_element);
    return 0;
}
