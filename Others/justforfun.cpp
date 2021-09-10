#include <bits/stdc++.h>
using namespace std;
int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fac(n - 1);
    }
}

int main()
{
    int n;
    int x, y, z;
    cout << "start with n" << endl;
    cin >> n;
    //cin >> x >> y >> x;
    cout << fac(n) << endl;
    //cout << fac(x) << endl;
    //cout << fac(y) << endl;
    //cout << fac(y) << endl;
    return 0;
}