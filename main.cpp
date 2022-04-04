#include <iostream>
#include <string> 
using namespace std;

int main()
{
    string liczby;
    float a, b, c, x;
    cin >> a >> b >> c;
    x = (c - b) / a;
    liczby = to_string(x);
    if (a == 0 && b == c)
    {
        cout << "NWR";
    }
    else if (a == 0 && b != 0)
    {
        cout << "BR";
    }
    else
    {
        size_t poz = liczby.find('.');
        liczby.erase(poz + 4, liczby.length());
        if (liczby[liczby.length() - 1] >= char(53))
        {
            liczby[liczby.length() - 2] = liczby[liczby.length() - 2] + 1;
            liczby.erase(liczby.length() - 1);
            cout << liczby;
        }
        else
        {
            liczby.erase(liczby.length() - 1);
            cout << liczby;
        }
    }
}
