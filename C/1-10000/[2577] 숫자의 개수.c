/* 2577��
*����
�� ���� �ڿ��� A, B, C�� �־��� �� 
A �� B �� C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��� A = 150, B = 266, C = 427 �̶�� A �� B �� C = 150 �� 266 �� 427 = 17037300 �� �ǰ�, ����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������.

*�Է�
ù° �ٿ� A, ��° �ٿ� B, ��° �ٿ� C�� �־�����. A, B, C�� ��� 100���� ũ�ų� ����, 1,000���� ���� �ڿ����̴�.

*���
ù° �ٿ��� A �� B �� C�� ����� 0 �� �� �� �������� ����Ѵ�. 
���������� ��° �ٺ��� �� ��° �ٱ��� A �� B �� C�� ����� 1���� 9������ ���ڰ� ���� �� �� �������� ���ʷ� �� �ٿ� �ϳ��� ����Ѵ�.

*/

#include <stdio.h>

int main(void) {
	int A, B, C, mul;
	int numcount[11] = { 0,0,0,0,0,0,0,0,0,0 };
	int sevenarray[7], eightarray[8], ninearray[9];
	scanf_s("%d %d %d", &A, &B, &C);
	mul = A * B * C;

	if (mul < 10000000) { //7�ڸ�
		for (int i = 0; i < 7; i++) {
			sevenarray[i] = mul % 10;
			mul= mul / 10;
		}

		for (int i = 0; i < 7; i++) {
			switch (sevenarray[i]) {
			case 0:
				numcount[0]++;
				break;
			case 1:
				numcount[1]++;
				break;
			case 2:
				numcount[2]++;
				break;
			case 3:
				numcount[3]++;
				break;
			case 4:
				numcount[4]++;
				break;
			case 5:
				numcount[5]++;
				break;
			case 6:
				numcount[6]++;
				break;
			case 7:
				numcount[7]++;
				break;
			case 8:
				numcount[8]++;
				break;
			case 9:
				numcount[9]++;
				break;	
			}
		}

		for (int i = 0; i < 10; i++)
			printf("%d\n", numcount[i]);

	}

	else if (mul < 100000000) { //8�ڸ�
		for (int i = 0; i < 8; i++) {
			eightarray[i] = mul % 10;
			mul= mul / 10;
		}

		for (int i = 0; i < 8; i++) {
			switch (eightarray[i]) {
			case 0:
				numcount[0]++;
				break;
			case 1:
				numcount[1]++;
				break;
			case 2:
				numcount[2]++;
				break;
			case 3:
				numcount[3]++;
				break;
			case 4:
				numcount[4]++;
				break;
			case 5:
				numcount[5]++;
				break;
			case 6:
				numcount[6]++;
				break;
			case 7:
				numcount[7]++;
				break;
			case 8:
				numcount[8]++;
				break;
			case 9:
				numcount[9]++;
				break;
			}
		}

		for (int i = 0; i < 10; i++)
			printf("%d\n", numcount[i]);
	}

	else {  //9�ڸ�
		for (int i = 0; i < 9; i++) {
			ninearray[i] = mul % 10;
			mul= mul / 10;
		}

		for (int i = 0; i < 9; i++) {
			switch (ninearray[i]) {
			case 0:
				numcount[0]++;
				break;
			case 1:
				numcount[1]++;
				break;
			case 2:
				numcount[2]++;
				break;
			case 3:
				numcount[3]++;
				break;
			case 4:
				numcount[4]++;
				break;
			case 5:
				numcount[5]++;
				break;
			case 6:
				numcount[6]++;
				break;
			case 7:
				numcount[7]++;
				break;
			case 8:
				numcount[8]++;
				break;
			case 9:
				numcount[9]++;
				break;
			}
		}

		for (int i = 0; i < 10; i++)
			printf("%d\n", numcount[i]);
	}

	return 0;
	
}