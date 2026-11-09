#include <stdio.h>

int main(void) {
    int scores[5][5] = {0};
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &scores[i][j]);
            scores[i][4] += scores[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d %.1f\n", scores[i][4], (double)scores[i][4] / 4);
    }
    
    return 0;
}