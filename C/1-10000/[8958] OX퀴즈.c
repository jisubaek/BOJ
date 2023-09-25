#include <stdio.h>
#include <string.h>

int main(void) {
	int test, score = 0, count = 0;
	char array[80];
	scanf_s("%d", &test);
	for (int i = 0; i < test; i++) {
		count = 1;
		score = 0;
		scanf_s("%s", array,80);
		for (int j = 0; j < strlen(array); j++) {
			if (array[j]=='O') {
				score += count;
				count++;
			}
			if (array[j]== 'X')
				count = 1;
		}
		printf("%d\n", score);

	}

	return 0;

}