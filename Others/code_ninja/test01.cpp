#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        while (n)
        {
            int a = n % 10;
            n = n / 10;
            if (a != 0)
            {
                cout << a << endl;
            }
        }
    }
}