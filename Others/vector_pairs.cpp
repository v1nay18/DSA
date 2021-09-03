#include <bits/stdc++.h>
using namespace std;
void pair_print(vector<pair<int, int>> &v)
{
    cout << "size" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i].first << "--->" << v[i].second << endl;
    }
}
int main()
{
    int a;
    cout << "Enter the Size" << endl;
    cin >> a;
    vector<pair<int, int>> vpair;
    for (int i = 0; i < a; i++)
    {
        int x, y;
        cin >> x >> y;
        vpair.push_back({x, y});
    }
    pair_print(vpair);
    return 0;
}