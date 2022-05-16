#include <iostream>

using namespace std;

int main()
{
    cout << "ile do wydania?: "; int r; cin >> r;
    cout << "ile nominalow masz?: "; int n; cin >> n;
    cout << "jakie to nominaly(od najwiekszego)?: ";int t[n], i;
    for(i = 0; i < n; i++) cin >> t[i];

    cout << endl << "RESZTA = " << r << endl;

    i = 0;

    while (r > 0)
    {
       while(r >= t[i])
       {
           r = r - t[i];
           cout << t[i] << endl;
       }

       i++;
    }

    cout << endl << "KONIEC" << endl;

    return 0;
}
