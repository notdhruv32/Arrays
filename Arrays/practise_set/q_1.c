/*
Creat an array if 10 no. verify using pointer arithmetics (ptr + 2) points to the 3rd
element where ptr is pointing to the 1st elelemtn of the array.
*/

#include<stdio.h>
#include<stdlib.h>


int main() {
    int arr[10];
    int *ptr = arr;
    int *ptr1 = &arr[2];
    printf("address of arr[0] is: %u\n", ptr);
    printf("address of ptr[2] which is the 3rd element: %u ", ptr1);
    ptr+=2;
    printf("\naddress of ptr[2] which is the 3rd element: %u ", ptr);

return 0;
}

//this verifies that ptr+2 points to the 3rd element.