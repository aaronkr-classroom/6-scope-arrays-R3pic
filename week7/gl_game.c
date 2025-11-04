// GL_game.c

#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()

int rand_num; // 전역변수

void gameInit() {
	srand(time(0)); // 1970년 1월 1일 00:00시부터 현재까지 ms 값
	rand_num = rand() % 10 + 1; // (0~9) + 1 = [1,10] 
}
void gamePlay() {
	// 지역변수
	int guess = 0, count = 0, allowed = 5; // 5개 추축만 가능

	
	do {
		printf("Guess the number (1-10): ");
		scanf_s("%d", &guess);
		count++;

		if(guess == rand_num) {
			printf("정답! Good! You Win!\n");
			break;
		}
		else if(guess < rand_num) {
			printf("Too low! Try higher!\n");
		}
		else if(guess > rand_num) {
			printf("Too High! Try lower!\n");
		}
	} while (count != allowed);

	if (count == allowed) {
		printf("Too many guesses! You Lose!\n");
	}
}

int main() {
	gameInit();
	gamePlay();
	return 0;
}