// Algortym wyznaczania liczb pierwszych.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int lp = 0;
    int p = 2; 
    int d = 1;

    cout << "Ile liczb pierwszych chcesz wyswietlic : ";
    cin >> n;
    cout << "Liczby pierwsze: ";

    while (lp < n)
    {
        for (int i = 2; i < p - 1; i++)
        {


            d = d + 1;
            if (p % d == 0)
            {
                p = p + 1;
                d = 1;
            }
        }
        cout << p << " ";
        p = p + 1;
        lp = lp + 1;
        d = 1;
    }

}