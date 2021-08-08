/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

각 테스트 케이스마다 A+B를 출력하시오.
*/

#include <stdio.h>

int main(void) {
	int A, B,T;
	scanf_s("%d", &T);
	
	for (int i; i < T; i++) {
		scanf_s("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
	return 0;
}