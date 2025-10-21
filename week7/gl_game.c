#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_num;

void gameInit(void) {
	srand(time(0));
	rand_num = rand() % 10 + 1;
}

void gamePlay(void) {
	int guess = 0, count = 0, allowed = 5;

	printf("Guess the number (1-10): ");
	do {
		scanf_s("%d", &guess);
		count++;

		if (guess == rand_num) {
			printf("정답! Good! You win!");
			break;
		}
		else if (guess < rand_num) {
			printf("Too low! Try higher! ");
		}
		else if (guess < rand_num) {
			printf("Too high! Try lower! ");
		}
	} while (count != allowed);

	if (count > allowed) {
		printf("Too many guesses! You lose!");
	}
}

int main(void) {
	gameInit();
	gamePlay();

	return 0;
}