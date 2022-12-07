#include <iostream>
#include "Patterns.h"

void Patterns::PrintLowerTriangle(const int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

void Patterns::PrintUpperTriangle(const int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (j >= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
}

void Patterns::PrintLowerRightTriangle(const int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (j >= (n-1) - i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
}

void Patterns::PrintUpperLeftTriangle(const int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			cout << "*";
			
		}
		cout << "\n";
	}
}

void Patterns::PrintCenterTriangle(const int n)
{
	int maxNumStars = (2 * n - 1);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < maxNumStars ; ++j)
		{
			if (j >= (maxNumStars / 2) - i && j <= (maxNumStars / 2) + i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
}

void Patterns::PrintCenterInvertedTriangle(const int n)
{
	int maxNumStars = (2 * n - 1);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < maxNumStars; ++j)
		{
			if (j >= i && j < maxNumStars - i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
}
