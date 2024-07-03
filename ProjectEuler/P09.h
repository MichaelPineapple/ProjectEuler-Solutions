#pragma once
#include "Common.h"

class P09
{
	int func()
	{
		int output = 0;
		const int sum = 1000;
		for (int a = 0; a < sum; a++)
		{
			for (int b = 0; b < sum; b++)
			{
				for (int c = 0; c < sum; c++)
				{
					if (a + b + c == sum)
					{
						if (a < b)
						{
							if (b < c)
							{
								if ((a * a) + (b * b) == (c * c))
								{
									output = a * b * c;
								}
							}
						}
					}
				}
			}
		}
		return output;
	}

public:
	P09()
	{
		int x = func();
		printf("%d", x);
	}
};