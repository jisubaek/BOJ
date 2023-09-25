/* 11021번
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
첫째 줄에 테스트 케이스의 개수 T가 주어지며, 테스트 케이스는 한줄로 이루어짐.

각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.
*/




#include <stdio.h>

int main(void) {
	int A, B, T;
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d %d", &A, &B);
		printf("Case #%d: %d\n", i + 1, A + B);
	}

	return 0;

}