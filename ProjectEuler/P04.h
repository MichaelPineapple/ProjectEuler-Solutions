#pragma once
#include "Common.h"

// Largest Palindrome Product

class P04
{
	string reverseString(string str)
	{
		string output = "";
		int strLen = str.length();
		for (int q = strLen - 1; q >= 0; q--)
		{
			char c = str.at(q);
			output = output + c;
		}
		return output;
	}

	int func(int min, int max)
	{
		int a = 0;
		for (int i = min; i < max; i++)
		{
			for (int j = min; j < max; j++)
			{
				int x = i * j;
				string str = std::to_string(x);
				string rev = reverseString(str);
				if (str._Equal(rev))
				{
					if (x > a) a = x;
				}
			}
		}
		return a;
	}

public:
	P04()
	{
		int x = func(0, 999);
		printf("%d\n\n", x);
	}
};

