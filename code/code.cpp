#include <iostream>
using namespace std;

int main()
{
	int n;
	int lp = 0;
	int p = 2;
	bool a = false;
	cout << "Ile liczb wyswietlic? ";
	cin >> n;

	for (int lp = 0; lp < n; lp++) 
	{
		for (int d = 2; d < p; d++)
		{
			if (p % d == 0) 
			{
				a = true;
			}
		} 
		if (a == true)
		{
			cout << p;
			p++;
		}
	}
}