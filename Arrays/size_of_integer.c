//aim - to see the size of 1 integer

#include<stdio.h>
#include<stdlib.h>


int main() {
    int x = 100;
    int *ptr = &x;
    printf("Value of ptr is %u\n", ptr);
    ptr++;                                  //the value is incrimented by 4 so that means 1 integer 
    printf("Value of ptr is %u", ptr);      //is 4 bytes.


return 0;
}