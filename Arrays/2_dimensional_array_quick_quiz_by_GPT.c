#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void inputt(int rows, int columns, int arr[rows][columns]);
void paint(int rows, int columns, int arr[rows][columns]);

int main() {
    int rows, columns;
    printf("Enter the no. of rows: ");
    scanf("%d", &rows);
    printf("Enter the no. of columns: ");
    scanf("%d", &columns);

    // Declare the array with variable size
    int arr[rows][columns];

    // Call functions to input and print the array
    inputt(rows, columns, arr);
    paint(rows, columns, arr);

    return 0;
}

// Function to input values into the 2D array
void inputt(int rows, int columns, int arr[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter the value for element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to print the values of the 2D array
void paint(int rows, int columns, int arr[rows][columns]) {
    printf("The values of the array are:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
