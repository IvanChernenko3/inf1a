﻿#include <iostream>
using namespace std;

void licz(int n)
{
	int f0 = 0, f1 = 1, f;

	for (int i = 0; i <= n; i++)
	{
		if (i > 1)
		{
			f = f0 + f1;
			f0 = f1;
			f1 = f;
		}
		else 
		{
			f = i;
		}
		cout << f << endl;
	}
}

int main()
{
	int n = 0;

	cout << "Ile wyrazow ciagu wypisac: ";
	cin >> n;

	licz(n);
}
