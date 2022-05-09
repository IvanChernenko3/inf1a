#include <iostream>
using namespace std;

int funkcja(int tab[], int szukana);


int main()
{
    int szukana;
    int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    int pozycja;

    cout << "Podaj liczbe ktora chcesz znalezc: \n";
    cin >> szukana;
    if (funkcja(tab, szukana) == -1) {
        cout << "Nie ma liczby.\n";
    }
    else {
        cout << "Szukana liczba " << szukana << " znajduje się na pozycji " << funkcja(tab, szukana);
    }
}

int funkcja(int tab[], int szukana) {
    int l = 0, p = 15, sr =  (l + p) / 2;;

    while (l <= p) {
        if (tab[sr] == szukana) {
            return sr;
        }
        else if (tab[sr] > szukana) {
            p = sr - 1;
        }
        else {
            l = sr + 1;
        }
        sr = (l + p) / 2;
    }

    return -1;
}