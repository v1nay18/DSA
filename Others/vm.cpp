#include <bits/stdc++.h>
using namespace std;
void printmaps(map<int, int> &m)
{
    vector<int> v;
    cout << "NUMBER of UNIQUE numbers are:: " << m.size() << endl;
    for (auto &it : m)
    {
        cout << "Unique Number:" << it.first << " Frequency:" << it.second << endl;
        v.push_back(it.second);
    }
    for (auto &it1 : v)
    {
        cout << it1 << endl;
    }
}

int main()
{
    map<int, int> m;
    vector<int> v;
    int n;
    cout << "enter the size of vector" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }
    printmaps(m);
    return 0;
}