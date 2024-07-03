#pragma once
#include "Common.h"

class P10
{
	bool isPrime(bigInt n)
	{
		if (n <= 1) return false;
		for (bigInt i = 2; i < n; i++)
		{
			if (n % i == 0) return false;
		}
	}

	bigInt func(int num)
	{
		bigInt sum = 2;
		for (bigInt i = 3; i < num; i += 2)
		{
			printf("\n%llu", i);
			if (isPrime(i))
			{
				printf("*");
				sum += i;
			}
		}

		return sum;
	}

public:
	P10()
	{
		bigInt x = func(2000000);
		printf("\n\n%llu", x);
	}
};
