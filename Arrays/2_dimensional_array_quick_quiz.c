/*
Creat a 2d array by taking input from the user. Write a display function to 
print the content of this 2-d array on the screen.

How am I gonna do dis:
    1.) ask for the 2 dimensions
    2.) make the void func. with 2 double for loops to take input.
    3.) same double for loops trick for printing the values.
    4.) end it with return 0 obvvvvvvvv.
*/

#include<stdio.h>
#include<stdlib.h>

void inputt(int rows, int columns, int arr[rows][columns]);
void paint(int rows, int columns, int arr[rows][columns]);

int main() {
    int rows;
    int columns;
    printf("Enter the no. of rows: ");
    scanf("%d", &rows);
    printf("Enter the no. of columns: ");
    scanf("%d", &columns);
    int arr[rows][columns];
    inputt(rows, columns, arr);
    paint(rows, columns, arr);
    

return 0;
}

void inputt(int rows, int columns, int arr[rows][columns]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++) {
            printf("Enter the values: ");
            scanf("%d", &arr[i][j]);
        }
    }
}
//---------------------
void paint(int rows, int columns, int arr[rows][columns]){
    printf("The values are:\n ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }
}

