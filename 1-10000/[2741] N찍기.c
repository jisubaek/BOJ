/* 2741번
자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
*/



#include <stdio.h>

int main(void) {
	int N;
	scanf_s("%d", &N);
	
	for (int i = 0; i < N; i++)
		printf("%d\n", i + 1);

	return 0;
}