#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Pierwsza liczba:";
    cin >> a; 
    cout << "Druga liczba:";
    cin >> b;

    while (a != b) {
        if (a < b) {
            b = b - a;
        }
        else {
            a = a - b;
        }
        cout << "Najwiekszy wspólny dzielnik:" << a;
    }
}

