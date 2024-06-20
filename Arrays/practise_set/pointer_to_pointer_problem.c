/*
Creat an array of size 3 X 10 containing multiplication tables of the 
numbers 2, 7 and 9 respectively. 

How I am gonna do it:
    1.) creat a 2D array in int main.
    2.) make 2 for loops 
    3.) honestly dekhi jaegi lets solve it
*/

#include<stdio.h>
#include<stdlib.h>

void table(int *arr, int num);

int main() {
    int arr[3][10];
    table(arr[0], 2);
    table(arr[0], 7);
    table(arr[0], 9);


return 0;
}

void table(int *arr, int num){
    for(int i = 0; i<10; i++){
        arr[i] = num*(i+1);
    }
    printf("----------------------------\nTable of %d: \n\n", num);
    for(int j = 0; j<10; j++) {
        printf("%d X %d = %d\n", num, j+1, arr[j]);
        }
    }