// 11_Q3.c

#include <stdio.h>

void Test()
{
	static int data = 0; 
	printf("%d, ", data++);
}
void main(void)
{
	for (int i = 0; i < 5; i++)Test(); // 0, 1, 2, 3, 4, 
	return 0;
}