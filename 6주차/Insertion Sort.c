#include <stdio.h>

int main() {
    int arr[] = {5, 3, 4, 1, 2}; //정렬할 배열
    int n = 5; //배열의 크기




    for (int i = 1; i < n; i++) { //두번째 원소부터 시작, 첫번째 원소는 이미 정렬되어 있다고 생각
        int key = arr[i]; // 현재 값을 저장
        int j = i - 1;   // 앞의 값을 비교

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // 큰 값을 뒤로 이동
            j--; // 앞의 값 비교를 위해 한칸 이동
        }

        arr[j + 1] = key; // key를 빈자리에 삽입
    }

    for (int i = 0; i < n; i++) {  //정렬된 배열 출력
        printf("%d ", arr[i]);
    }

    return 0;
}