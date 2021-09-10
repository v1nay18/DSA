#include <bits/stdc++.h>
using namespace std;
void printmaps(map<int, int> &m)
{
    cout << "The Size of Map is::" << m.size() << endl;
    for (auto &it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}

void printvecotr(vector<int> &v)
{
    cout << "The size of VECTOR is::" << v.size() << endl;
    for (auto &it1 : v)
    {
        cout << it1 << " ";
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
    printvecotr(v);
    for (int i = 0; i < n; i++)
    {
        m.insert({v[i], 0});
        m[v[i]]++;
    }
    printmaps(m);
    return 0;
}