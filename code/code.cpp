#include <iostream>
using namespace std;

int main()
{
	/*
	//kod na wilyczanie liczb pierwszych

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
			cout << p << endl;
			cout << p;
			lp++;
		}
		p++;
		dzielniki = 0;
	}

	//kod na obliczanie NWD
	int a, b;
	cout << "Pierwsza liczba: ";
	cin >> a;
	cout << "Druga liczba: ";
	cin >> b;

	while (a != b) {
		if (a < b) {
			b = b - a;
		}
		else {
			a = a - b;
		}
	}
	cout << "Najwiekzsy wspolny dzielnik: " << a;

	//kod na obliczanie NWW
	int a, b;
	int nww;
	cout << "Pierwsza liczba: ";
	cin >> a;
	cout << "Druga liczba: ";
	cin >> b;
	int iloczyn = a * b;


	while (a != b) {
		if (a < b) {
			b = b - a;
		}
		else {
			a = a - b;
		}
		nww = iloczyn / a;
	}
	cout << "Najwieksza wspolna wielokrotnosc: " << nww;
	*/

	int klucz;
	char tab[200];
	int dl = strlen(tab);

	cout << "podaj klucz: ";
	cin >> klucz;
	cout << "podaj wyraz: ";
	cin >> tab;

	if (!(klucz >= -26 && klucz <= 26)) {
		return;
	}
	if (klucz >= 0) {
		for (int i = 0; i <= 26;) {
			while {

			}
		}
	}
}