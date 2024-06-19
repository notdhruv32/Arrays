/*
Write a program to accept marks of five students in an array and print them to screen.
*/

#include<stdio.h>
#include<stdlib.h>


int main() {
    int marks[5];
    printf("Enter marks for 1st student: ");
    scanf("%d", &marks[0]);
    printf("Enter marks for 2nd student: ");
    scanf("%d", &marks[1]);
    printf("Enter marks for 3rd student: ");
    scanf("%d", &marks[2]);
    printf("Enter marks for 4th student: ");
    scanf("%d", &marks[3]);
    printf("Enter marks for 5th student: ");
    scanf("%d", &marks[4]);
    printf("Marks of students 1, 2, 3, 4 and 5 are %d %d %d %d %d respectively", marks[0], marks[1], marks[2], marks[3], marks[4]);


return 0;
}

//ok