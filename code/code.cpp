#include <iostream>
using namespace std;

int main()
{
	int n;
	int lp = 0;
	int dzielniki = 0;
	int p = 2;

	cout << "Ile liczb wygenerowac: ";
	cin >> n;

	while (lp < n) {
		for (int d = 2; d <= p - 1; d++) {
			if (p % d == 0) {
				dzielniki++;
			}
		}
		if (dzielniki == 0) {
			cout << p;
			lp++;
		}
		p++;
		dzielniki = 0;
	}
}
