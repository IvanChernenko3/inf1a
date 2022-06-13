#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	system("Color C"); //text color
	cout << "THE DUNGEON GAME\n";

	int userChoice;


	cout << "MENU:\n 1. Enter The Dungeon\n 2. Inventory\n 3. Upgrades\n 4. Shop\n 5. Exit\n";
	cin >> userChoice;
	
	switch (userChoice)
	{
	case 1:
		cout << "Choosed 1";
		break;
	case 2:
		cout << "Choosed 2";
		break;
	case 3:
		cout << "Choosed 3";
		break;
	case 4:
		cout << "Choosed 4";
		break;	
	case 5:
		cout << "Choosed 5";
		break;
	}
}