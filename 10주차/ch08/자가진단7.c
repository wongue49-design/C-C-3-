#include <stdio.h>

int main(void) {
    int arr[10];
    int sum = 0;
    int odd_sum = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (i % 2 == 1) {
            sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }
    
    double avg = (double)odd_sum / 5;
    printf("sum : %d\navg : %.1f\n", sum, avg);
    
    return 0;
}