#include <stdio.h>

int main() {
    int height, weight;
    scanf("%d %d", &height, &weight);
    
    int obesity = weight + 100 - height;
    printf("%d\n", obesity);
    
    if (obesity > 0) {
        printf("Obesity\n");
        printf("Need control\n");
    }
    
    return 0;
}