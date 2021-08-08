/*2439
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
하지만, 오른쪽을 기준으로 정렬한 별을 출력하시오.
*/

#include <stdio.h>

int main(void) {
	int N;
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int k = N - i; k > 1; k--)
			printf(" ");
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}
}