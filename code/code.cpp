#include <iostream>
using namespace std;

int main()
{
	//kod na wilyczanie liczb pierwszych
	/* 
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
<<<<<<< HEAD
			cout << p << endl;
=======
			cout << p;
>>>>>>> af345649dd9cc7d5e8905f38de207df410013fda
			lp++;
		}
		p++;
		dzielniki = 0;
<<<<<<< HEAD
	}
	*/ 

	//kod na obliczanie NWD
	/*int a, b;
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
	cout << "Najwiekzsy wspolny dzielnik: " << a;*/

	//kod na obliczanie NWW
	/*
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
}
=======
	}
}
>>>>>>> af345649dd9cc7d5e8905f38de207df410013fda
