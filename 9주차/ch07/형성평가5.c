#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char ch = 'A';
    int num = 0;
    
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c ", ch++);
        }
        for (int j = 0; j < n - i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    
    return 0;
}