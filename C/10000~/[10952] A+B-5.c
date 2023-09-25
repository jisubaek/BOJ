/* 10952번
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
입력의 마지막에는 0 두 개가 들어온다.
*/

#include <stdio.h>

int main(void) {
	int A=1, B=1;

	
	while (A != 0 && B != 0) {
		scanf_s("%d %d", &A, &B);
		if (A == 0 && B == 0)
			break;
		printf("%d\n", A + B);
	}
	return 0;
}