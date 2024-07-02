#pragma once
#include "Common.h"

// Sum Square Difference

class P06
{
	int func(int max)
	{
		int a = 0;
		int x = 0;
		for (int i = 0; i <= max; i++)
		{
			x += i;
			a += (i * i);
		}
		int b = x * x;
		int dif = b - a;
		return dif;
	}

public:
	P06()
	{
		int x = func(100);
		printf("%d\n\n", x);
	}
};

