/*
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)

�� �׽�Ʈ ���̽����� A+B�� ����Ͻÿ�.
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