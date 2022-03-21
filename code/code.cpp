#include <iostream>
using namespace std;

int main()
{
	int n;
	int lp = 0;
	int d = 0;
	int p = 2;

	bool flaga = true;
	cout << "Ile liczb wygenerowac: ";
	cin >> n;

	while (n < lp) {
		for (int d = 2; d <= p-1; d++) {
			if (p % d == 0) {
				flaga = false; //false - nie jest liczbą parzystą
			}
		}
	}
}