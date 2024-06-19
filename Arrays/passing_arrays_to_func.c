#include<stdio.h>
#include<stdlib.h>

void print_array(int n, int ptr[]);

int main() {
    int allay[] = {35,73,25,75,3,6,63};
    print_array(7, allay);
return 0;
}

void print_array(int n, int ptr[]){
    for(int i = 0; i<n; i++) {
        printf("The value of array no. %d is: %d\n", i+1, ptr[i]);
    }
}

//yup works :)