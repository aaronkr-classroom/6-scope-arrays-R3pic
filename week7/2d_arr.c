#include <stdio.h>

#define NUM_STDS 3
#define NUM_GRADES 4

float calcAvg(int data[]) {
	int sum = 0;
	for (int i = 0; i < NUM_GRADES; i++) {
		sum += data[i];
	}
	// (85 + 45 + 70 + 93) / 4 = 73.25
	return sum / (float)NUM_GRADES;
}

int main(void) {
	int grades[NUM_STDS][NUM_GRADES] = {
		{85, 45, 70, 93},
		{74, 86, 93, 45},
		{67, 37, 99, 97}
	};

	printf("Student grades:\n");
	for (int i = 0; i < NUM_STDS; i++) {
		printf("Student %d: ", i + 1);
		for (int j = 0; j < NUM_GRADES; j++) {
			printf("%d ", grades[i][j]);
		}
		printf("Average: %.2f\n", calcAvg(grades[i]));
	}
	return 0;
}