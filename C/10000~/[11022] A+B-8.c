/* 11022��
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)
�� �׽�Ʈ ���̽����� "Case #x: A + B = C" �������� ����Ѵ�. 
x�� �׽�Ʈ ���̽� ��ȣ�̰� 1���� �����ϸ�, C�� A+B�̴�.
*/




#include <stdio.h>

int main(void) {
	int A, B, T;
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i + 1, A, B, A + B);
	}

	return 0;

}