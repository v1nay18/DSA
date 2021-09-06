#include <bits/stdc++.h>
using namespace std;
void pvp(vector<pair<int, int>> &v)
{
    cout << "Size is" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].second << v[i].first << endl;
    }
}

int main()
{
    vector<pair<int, int>> v1;
    int n;
    cout << "Enter the SIZE" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v1.push_back({x, y});
    }
    pvp(v1);
    return 0;
}