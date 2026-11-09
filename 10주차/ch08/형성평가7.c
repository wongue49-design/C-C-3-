#include <stdio.h>

int main(void) {
    char arr[100];
    int count = 0;
    
    while (1) {
        scanf(" %c", &arr[count]);
        if (arr[count] == '0') {
            break;
        }
        count++;
    }
    
    printf("%d\n", count);
    
    for (int i = 0; i < count; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
    
    return 0;
}