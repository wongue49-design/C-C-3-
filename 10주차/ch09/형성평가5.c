#include <stdio.h>

int main(void) {
    int arr[5][4] = {0};
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            arr[i][3] += arr[i][j];   
            arr[4][j] += arr[i][j]; 
            arr[4][3] += arr[i][j];    
        }
    }
    
    for (int i = 0; i < 4; i++) {
        printf("%d\n", arr[i][3]);
    }
    printf("%d\n", arr[4][3]);
    
    return 0;
}