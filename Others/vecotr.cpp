#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << endl;
    }
    v[2] = 9;
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << endl;
    }
    return 0;
}