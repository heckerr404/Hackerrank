#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    // Complete the function logic here
     if (n < 2)
        return -1;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0;i<n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i]<largest && arr[i]>secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        return -1;

    return secondLargest;
}
    

int main() {
    int n;
    scanf("%d", &n);
    
   
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    printf("%d\n", findSecondLargest(arr, n));

    return 0;
}