/*
Write a program to creat an array of 10 integers and store multiplication table
of 5 in it

how I am gonna do it:
    1.) make array of 10 integers
    2.) make a for loops:
        1.) It will have int i incrimenting and it will have the formula of 5's table
        2.) printing the values.
    3.) obvvv return 0.
*/

#include<stdio.h>
#include<stdlib.h>


int main() {
    int arr[10];
    int *ptr = arr;
    int product;

    for(int i = 0; i < 10; i++) {
        printf("5 X %d = %d\n", i+1, (i+1)*5);
    }

return 0;
}

//this was honestly easssier than hello world.