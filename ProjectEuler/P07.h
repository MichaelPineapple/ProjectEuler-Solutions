#pragma once
#include "Common.h"

// 10001st Prime

class P07
{
	bool isPrime(int n)
	{
		bool output = true;
		for (int i = 2; i < n - 1; i++)
		{
			if (n % i == 0) output = false;
		}
		return output;
	}

	int func(int num)
	{
		int x = 1;
		for (int i = 3; i < INT_MAX; i += 2)
		{
			if (isPrime(i))
			{
				x++;
				if (x == num)
				{
					return i;
				}
			}
		}
		return -1;
	}

public:
	P07()
	{
		int x = func(10001);
		printf("%d", x);
	}
};

