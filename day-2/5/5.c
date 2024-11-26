#include <stdio.h>

// 实现--运算
int main()
{

	int x = 5;
	int y = 6;

	// y--;// 6 - 1 = 5
	// x ++;// 5 + 1 = 6
	// x = x * 2; // 5 * 2 = 10
	// x += x-2; // 5 + 5 - 2 = 8
	// x = x /5;// 5 / 5 = 1
	x /= 5;//  ==  x/= 5;

	int z = x + y;

	printf("%d\n", z);
	return 0;
}
