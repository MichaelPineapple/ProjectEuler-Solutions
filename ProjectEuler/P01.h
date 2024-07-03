#pragma once
#include "Common.h"

// Multiples of 3 or 5

class P01
{
	int func(int num)
	{
		int sum = 0;
		for (int i = 1; i < num; i++)
		{
			if (i % 3 == 0 || i % 5 == 0) sum += i;
		}
		return sum;
	}

public:
	P01()
	{
		int x = func(1000);
		printf("%d", x);
	}
};