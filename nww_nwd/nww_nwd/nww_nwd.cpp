#include <iostream>

    using namespace std;

    void NWW(int x, int y);
    void NWD(int x,int y);

int main()
{
    int liczbA,liczbB;
    bool choice = false;

    cout << "wprowadz pierwsza liczbe: ";
        cin >> liczbA;
    cout << "wprowadz druga liczbe: ";
        cin >> liczbB;

        cout << "wybrano " << liczbA << " i " << liczbB << "\n [0] NWW \n [1] NWD \n jaka akcje wykonac: ";
            cin >> choice;

                if (choice == false) {
                    NWW(liczbA, liczbB);
                }
                else {
                    NWD(liczbA, liczbB);
                }
}

void NWW(int x, int y) {

    int iloczyn = x * y;
    int nww;

        while (x != y) {
            if (x < y) {
                x = x - y;
            }
            else {
                y = y - x;
            }
        }
    nww = iloczyn / x;
    cout << "\n" << nww;
 
}

void NWD(int x,int y) {
    while (x != y) {
        if (x < y) {
            x = x - y;
        }
        else{
            y = y - x;
        }
    }
    cout << x;
}