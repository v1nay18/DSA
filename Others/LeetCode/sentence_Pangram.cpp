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

    for (int i = 0; i < s.length(); i++)
    {
        //m11[s]++;
        // m11.insert({s[i], m11[s[i]]++});
        m11[s]++;
    }
    printmaps(m11);
    return 0;
}