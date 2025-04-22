#include <stdio.h>
#include<conio.h>
int main() {
    int n, i, j, temp, maxIndex;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\nArray before sorting:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    for(i = 0; i < n-1; i++) {
        maxIndex = i;
        for(j = i+1; j < n; j++) {
            if(arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        
        // Swap the found maximum element with the element at index i
        if(maxIndex != i) {
            temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
    
    printf("\nArray after sorting in descending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    getch();
    return 0;
}
