#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int n2 = n;
        while (j <= n)
        {

            while (n2)
            {
                cout << n2;
                n2--;
            }
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}