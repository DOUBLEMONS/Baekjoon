#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int X, COUNTING = 0;
	scanf("%d", X);

	while (1)
	{
		if (X % 3 == 0 && X >= 3)
		{
			COUNTING = COUNTING + 1;
			X = X / 3;
			continue;
		}
		else if (X == 1)
		{
			printf("%d\n", COUNTING);
			break;
		}

		COUNTING = COUNTING + 1;
		X = X - 1;
	}
}

// X가 3의 배수가 될 때까지 계속 1을 뺀다.
// X가 1이 되면 연산 횟수를 출력한다. 
// 1 
// 2 
// 3 // 1
// 4 - 1 = 3 / 3 = 1 // 2
// 5 - 2 = 3 / 3 = 1 // 3
// 6 // 2 - 1 // 1
// 7 - 1 = 6 / 3 * 2 = 1 // 3
// 8 - 2 = 6 / 3 * 2 = 1 // 4
// 9 // 3 / 3 // 1
// 10 - 1 = 9 / 3 * 3 = 1 
// 11 - 2 = 9 / 3 * 3 = 1
// 12 // 4 - 1 / 3 // 1
// 13 - 1 = 12 / 3 * 4 = 1
// 14 - 2 = 12 / 3 * 4 = 1
// 15 // 5 - 2 / 3 // 1 



// 3으로만 나누어지는 경우
// 2로만 나누어지는 경우
// 3과 2둘 다로 나누어지는 경우