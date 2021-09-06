#include <bits/stdc++.h>
using namespace std;
void pva(vector<vector<int>> &v)
{
    cout << "The size is" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
int main()
{
    vector<vector<int>> v;
    int a;
    cout << "enter the size" << endl;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        for (int j = 0; j < b; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
        for (int i = 0; i < a; i++)
        {
            pva(v);
        }
    }
    return 0;
}