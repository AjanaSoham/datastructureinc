#include<stdio.h>

void max(int n, int a[n], int currentMax); // Function to find maximum recursively

int main(){
    int n;
    
    // Input the number of elements in the array
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    int a[n]; // Declare array of size n
    
    // Input the elements of the array
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Print the array elements
    printf("The array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    
    // Start finding the maximum using the first element as the initial max
    printf("The maximum number is: ");
    max(n, a, a[0]); // Call the function with the first element as the current maximum
    printf("\n");
    
    return 0;
}

// Recursive function to find the maximum element in the array
void max(int n, int a[n], int currentMax) {
    if (n == 0) {
        // Base case: when no more elements left to check, print the current maximum
        printf("%d", currentMax);
        return;
    }
    
    // Compare the current element a[n-1] with currentMax
    if (a[n-1] > currentMax) {
        currentMax = a[n-1]; // Update currentMax if a[n-1] is larger
    }
    
    // Recursively call the function with one less element
    max(n-1, a, currentMax);
}
