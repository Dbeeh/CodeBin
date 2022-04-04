// NWW i NWD.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int iloczyn;

	cout << "NWD" << endl;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe : ";
	cin >> b;

	while (a != b)
	{
		if (a < b)
		{
			b = b - a;
		}
		else
		{
			a = a - b;
		}
	}
	cout << "Najwiekszy wspolny dzielnik: " << a;

	iloczyn = a * b;
	while (a != b)
	{
		if (a < b)
		{
			b = b - a
		}

		else
		{
			a = a - b
		}
		
		nww = iloczyn / a
	}
	cout << "Najwieksza wspolna wielokrotnosc" << a;
	
}

