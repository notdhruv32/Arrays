/*
Write a program to creat an array of 10 integers and store multiplication table
of n in it.

How am I gonna do it:
    1.) Make int array[10].
    2.) ask for input as scanf
    3.) make a for loop for outputting values of input * 1, input * 2....Input*10
    4.) return 000;
*/

#include<stdio.h>
#include<stdlib.h>


int main() {
    int arr[10];
    int *ptr = arr;
    int n;
    printf("Enter a number for a multiplication table: ");
    scanf("%d", &n);

    for(int i = 0; i < 10; i++) {
        arr[i] = n * i;
        printf("%d X %d = %d\n", n,  i+1, arr[i] + n);
    }

return 0;
}

//this was honestly easssier than hello world.