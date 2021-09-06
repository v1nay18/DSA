#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "enter the size of vector" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    vector<int>::iterator it = v.begin();
    for (it = v.begin(); it != v.end(); it++)
    {

        cout << (*it);
    }
    return 0;
}