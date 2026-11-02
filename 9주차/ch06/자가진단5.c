#include <stdio.h>

int main() {
    int n;
    int count = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 3 == 0 && n % 5 == 0) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}