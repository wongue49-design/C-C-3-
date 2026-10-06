#include <stdio.h>

int main() {
    int arr[] = {5, 3, 4, 1, 2}; //정렬할 배열 
    int n = 5; //배열의 크기 

    for (int i = 0; i < n - 1; i++) { //첫번째 위치부터 하나씩 정렬
        int min = i; //현재 위치를 최솟값으로 생각

        for (int j = i + 1; j < n; j++) {  //i 다음 위치부터 끝까지 확인
            if (arr[j] < arr[min]) { 
                min = j; // 더 작은 값의 위치 저장
            }
        }
        // 가장 작은 값과 현재 위치를 교환     
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    //정렬된 배열 출력
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}