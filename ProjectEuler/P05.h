#pragma once
#include "Common.h"

// Smallest Multiple

class P05
{
	int func(int max)
	{
		for (int i = max; i < INT_MAX; i += max)
		{
			bool a = true;
			for (int j = 2; j <= max - 1; j++)
			{
				if (i % j != 0) a = false;
			}
			if (a) return i;
		}
		return -1;
	}

public:
	P05()
	{
		int x = func(20);
		printf("%d", x);
	}
};

