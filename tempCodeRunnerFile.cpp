#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the Number to find" << endl;
    cin >> x;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};
    int s = 0;
    int e = 10;
    for(int s=0;s<e;s++){
   int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] == x)
        {
            cout <<  "Found" << endl;
        }
        if (arr[mid] > x)
        {
            s = mid + 1;
            mid = (s + e) / 2;
        }
        if (arr[mid] < x)
        {
            e = mid - 1;
            mid = (s + e) / 2;
        }
    }
    }
    return 0;
}