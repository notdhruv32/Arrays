//store marks of 100 students and print it.

#include<stdio.h>
#include<stdlib.h>


int main() {
    int marks[100];
    for(int i = 0; i<100; i++){
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    for(int i = 0; i <100; i++){
        printf("Marks of student %d: %d\n", i+1, marks[i]);
    }

return 0;
}