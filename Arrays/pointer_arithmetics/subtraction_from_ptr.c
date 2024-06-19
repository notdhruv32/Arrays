#include<stdio.h>
#include<stdlib.h>


int main() {
    int x = 100;
    int *ptr = &x;
    printf("ptr = %u\n", ptr);
    printf("1 - ptr = %u", ptr - 1);

return 0;
}