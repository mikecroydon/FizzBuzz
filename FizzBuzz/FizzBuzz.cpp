// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

	for (int i = 1; i <= 100; ++i)
	{
		if ((i % 5) == 0)
		{
			if ((i % 3) == 0)
			{
				cout << "Fizz";
			}
			cout << "Buzz" << endl;
		}
		else if ((i % 3) == 0)
		{
			cout << "Fizz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

}