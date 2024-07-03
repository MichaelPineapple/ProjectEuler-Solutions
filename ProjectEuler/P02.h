#pragma once
#include "Common.h"

// Even Fibonacci Numbers

class P02
{
	int func(int max)
	{
		int sum = 0;
		int prev = 1;
		int cur = 2;
		while (cur < max)
		{
			if (cur % 2 == 0) sum += cur;
			int tmp = cur + prev;
			prev = cur;
			cur = tmp;
		}
		return sum;
	}

public:
	P02()
	{
		int x = func(4000000);
		printf("%d", x);
	}
};