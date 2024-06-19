/*
10 students
5 subjects
2 dimensional array

2 for loops 1 is main nd other one inside the other one
1 piece of code for entring values other one for outputting values

lets start ig.....:)
*/

#include<stdio.h>
#include<stdlib.h>


int main() {
    int n_kids;
    int n_sub;
    printf("This App can store marks of students subject-wise\n");
    printf("How many students are there: ");
    scanf("%d", &n_kids);
    printf("How many subject are there: ");
    scanf("%d", &n_sub);
    int arr[n_kids][n_sub];

    for(int i = 0; i < n_kids; i++){
        for(int j = 0; j < n_sub; j++){
            printf("Enter the Marks of student %d in subject %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("-------------------------------\n");
    for(int i = 0; i < n_kids; i++){
        for(int j = 0; j < n_sub; j++){
            printf("The Marks of student %d in subject %d are: %d\n ", i+1, j+1, arr[i][j]);
        }
    }

return 0;
}

//this was interesting but nice easssyyyyyyy.