#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    int sum_even = 0;
    int sum_odd = 0;

    while (a)
    {
        int b = a % 10;
        a = a / 10;
        if (b % 2 == 0)
        {
            sum_even = sum_even + b;
        }
        else
        {
            sum_odd = sum_odd + b;
        }
    }
    cout << "Sum of even"
         << " " << sum_even << endl;
    cout << "Sum of odd"
         << " " << sum_odd << endl;

    return 0;
}