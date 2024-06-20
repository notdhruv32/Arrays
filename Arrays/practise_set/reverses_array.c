/*
Write a program containing a func. which reverses the array
passed to it.

How I am gonna do it:
    1.) make a array in main() like arr[] = {35,45,634,3..}
    2.) Call the func. after it.
    3.) Declare the func.:
        1.) pass the arr reference and size
        2.) a for loops for Switching the arr[0] with arr[9] and so on,
        3.) stop the loop at halfway that is at 5 or 4. 
*/

#include<stdio.h>
#include<stdlib.h>

void reverse(int *arr, int size);

int main() {
    int arr[] = {1,5,7,5,3,1,8,0,9,4};
    reverse(arr, 10);
    for(int i = 0; i<10; i++){
        printf("Value if arr[%d] = %d\n", i, arr[i]);
    }

return 0;
}

void reverse(int *arr, int size){
    for(int i = 0; i<(size/2)/*to prevent reversing 2 times*/; i++) {
        int temp;
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}