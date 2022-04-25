
#include<iostream>
#include<cstring>
using namespace std;

bool czy_anagram(char* a, char* b)
{
    
    int dl1 = strlen(a), dl2 = strlen(b);
    if (dl1 != dl2)return false;

    int licz[127] = {}; 
    for (int i = 0; i < dl1; i++)
        licz[a[i]]++;
    for (int i = 0; i < dl1; i++)
        licz[b[i]]--; 

    for (int i = 0; i < 127; i++)
        if (licz[i] != 0)
            return false; 

    return true;
}

int main()
{

    char a[101], b[101]; 
    cout << "Podaj dwa wyrazy: ";
    cin >> a >> b;

    if (czy_anagram(a, b))
        cout << "Podane wyrazy sa anagramami\n";
    else
        cout << "Podane wyrazy nie są anagramami\n";


    return 0;
}