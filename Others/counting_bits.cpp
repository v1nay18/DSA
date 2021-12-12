#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 2;
    vector<int> result;
    int count = 0;
    for (int i = 0; i < n + 1; i++)
    {
        while (i)
        {
            int j = 1 % 2;
            i = i % 2;
            if (j == 1)
            {
                count = count + 1;
                result.push_back(count);
            }
            count = 0;
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << result[i] << endl;
    }
    {
        /* code */
    }

    return 0;
}