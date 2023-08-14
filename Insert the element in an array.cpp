#include <stdio.h>
int main() {
    int arr[100]; // Assuming the array can hold up to 100 elements
    int n; // Number of elements in the array
    int position; // Position where the element should be inserted
    int newValue; // New value to be inserted
    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the position and new value
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);
    printf("Enter the new value to be inserted: ");
    scanf("%d", &newValue);
    // Shift elements to the right to make space for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new value at the specified position
    arr[position] = newValue;
    // Increment the number of elements in the array
    n++;
    // Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

