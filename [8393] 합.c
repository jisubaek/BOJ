/*8393��
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <stdio.h>

int main(void) {
	int n,total=0;
	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++)
		total += (i + 1);

	printf("%d", total);

	return 0;
}