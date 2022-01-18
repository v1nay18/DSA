#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, k = 1;

    while (i <= n)
    {
        int b = 1;
        while (b <= n - i)
        {

            cout << " ";
            b++;
        }
        int j = 1;
        while (j <= i)
        {
            cout << k;
            j++;
            k++;
        }
        i++;
        cout << "" << endl;
    }
    return 0;
}