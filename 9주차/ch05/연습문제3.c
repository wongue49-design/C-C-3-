#include <stdio.h>

int main() {
    int score;
    
    while (1) {
        scanf("%d", &score);
        
        if (score >= 0 && score <= 100) {
            if (score >= 80) {
                printf("Pass\n");
            } else {
                printf("Fail\n");
            }
        } else {
            break;
        }
    }
    
    return 0;
}