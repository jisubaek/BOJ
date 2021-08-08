/*2739번
N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오.  N*1부터 N*9까지 출력한다.
*/

#include <stdio.h>

int main(void) {

	int N;
	scanf_s("%d", &N);

	for (int i = 0; i < 9; i++)
		printf("%d * %d = %d\n", N, i + 1,N*(i+1));

	return 0;
}