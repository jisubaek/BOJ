/*8393번
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
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