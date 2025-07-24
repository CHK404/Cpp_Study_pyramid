#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char c = 0;								// char 형의 변수 c를 0으로 초기화
	int a, b, n = 0;						// int 형의 변수 a, b, n을 0으로 초기화
	printf("줄 수를 입력하세요: ");			// "줄 수를 입력하세요: "를 출력한다
	scanf("%d", &n);						// n에 변수를 입력받는다
	
	for (a = n; a < 2 * n; a++)				// a가 n부터 1씩 커지며 2n과 같아질 때까지 반복
	{
		for (b = a; b < 2 * n - 1; b++)		// b가 a부터 1씩 커지며 2n-1과 같아질 때까지 반복
		{
			printf(" ");					// " ", 빈칸을 출력한다
		}
		for (c = 97; c < a - n+ 98; c++)	// c가 97부터 1씩 커지며 a-n+98과 같아질 때까지 반복
		{
			printf("%c", c);				// c를 아스키 코드값으로 출력한다
		}
		printf("\n");						// 줄을 바꿈
	}
	return 0;
}
