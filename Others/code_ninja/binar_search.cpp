#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the Number to find" << endl;
    cin >> x;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int s = 1;
    int e = 10;
    mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] == x)
        {
            cout << mid << endl;
        }
        else if (arr[mid] > x)
        {
            s = mid + 1;
            mid = (s + e) / 2
        }
        else if (arr[mid] < x)
        {
            e = mid - 1;
            mid = (s + e) / 2;
        }
    }

    return 0;
}