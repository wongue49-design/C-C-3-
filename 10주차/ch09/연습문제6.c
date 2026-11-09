#include <stdio.h>

int main(void) {
    int scores[5][4] = {0};
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores[i][j]);
            scores[i][3] += scores[i][j];   // 학생별 총점
            scores[3][j] += scores[i][j];   // 과목별 합계
            scores[3][3] += scores[i][j];   // 전체 총점
        }
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == 3 && j == 3) {
                printf("%d\n", scores[i][j]);
            } else {
                printf("%d ", scores[i][j]);
            }
        }
    }
    
    return 0;
}