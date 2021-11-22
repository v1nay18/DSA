#include <bits/stdc++.h>
using namespace std;
void printmaps(map<string, int> &m)
{
    cout << "The Size of Map is::" << m.size() << endl;
    for (auto &it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    map<string, int> m11;
    string s;
    cout << "Enter the string";
    cin >> s;
    cout << s.length() << endl;

    for (int i = 0; s[i]; i++)
    {
        if (m11.find(s[i]) == m11.end())
        {
            m11.insert(make_pair(s[i], 1));
        }
    }
    printmaps(m11);
    return 0;
}