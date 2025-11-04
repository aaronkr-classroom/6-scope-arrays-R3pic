#include <stdio.h>

int calc_exp(int num, int exp) {
	int sum = 1; 
	int count = 0;
	while(count != exp){
		sum = sum * num;
		count++;
		printf("%d ", sum);
	}

	return num;
}
int main() {
	int num, exp;
	printf("숫자입력: ");
	scanf_s("%d", &num);
	printf("지수입력: ");
	scanf_s("%d", &exp);
	printf("\n %d^%d = %d", num, exp, calc_exp(num, exp));

	return 0;
}