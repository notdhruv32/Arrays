//nothing js printing of addresses of 3D arrays.

#include<stdio.h>
#include<stdlib.h>


int main() {
    int arr[6][5][4][3]; //change of plan its 4D nowww.
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 4; k++){
                for(int l = 0; l < 3; l++){
                    printf("Address of arr[%d][%d][%d][%d]: %u\n", i, j, k, l, &arr[i][j][k][l]);
                }
            }
        } //random mind thought I js realized that output of this thing can also help in cracking 4 digits passwords as it can generate all possible patterns if set properly.
    }

return 0;
}