#include<stdio.h>
#include<stdlib.h>


int main() {
    int x = 100;
    int *ptr = &x;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("1 + ptr = %u", ptr);

return 0;
}