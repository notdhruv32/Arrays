/*
write a program containing func. which counts on the no. of
+ve integers in an array.

How am I gonna do it:
    1.) func prototype of counting.
    2.) make an int array and give it values
    3.) call the func. 
    4.) define the func.:
        1.) pass it the array and size of array.
        2.) an if condition which iterates when true
    ig this shud work.
*/

#include<stdio.h>
#include<stdlib.h>

void counter(int *arr, int n);

int main() {
    int arr[] = {-10,20,30,30,-200,-99,45};
    counter(arr, 7);

return 0;
}

void counter(int *arr, int n) {
    int j = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] > 0) {
            j++;
        }
        else{
            continue;
        }
    }
    printf("There are %d +ve integers.", j);
}

//yup worksss