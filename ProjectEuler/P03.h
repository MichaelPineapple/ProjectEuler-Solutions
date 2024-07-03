#pragma once
#include "Common.h"

// Largest Prime Factor

class P03
{
	bigInt func(bigInt num)
	{
		if (num % 2 == 0) num /= 2;
		for (bigInt i = 3; i < num; i += 2)
		{
			if (num % i == 0) num /= i;
		}
		return num;
	}

public:
	P03()
	{
		bigInt x = func(600851475143);
		printf("%llu", x);
	}
};