/*
1.) for loops:
        scanf => address hai => address incrimenting.
2.) ekaur for loop:
        printing values.
*/

#include<stdio.h>
#include<stdlib.h>


int main() {
    int i[20];
    int *add_i = i; //this is same as writing int *add_i = &i[0]; cuz the i contains the address of 1st integer in the array'i[20]'

    for(int j = 0; j<20; j++){
        printf("Enter Marks for student %d: ", j+1);
        scanf("%d", add_i);
        add_i++;
    }
    printf("------------------------------------\n");
    add_i = i;

    for(int j = 0; j<20; j++){
        printf("Marks of student %d is: %d\n", j+1, *add_i);
        add_i++;
    }

return 0;
} 