#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return fact(n - 1) * n;
}
int main()
{
    cout << "Enter the number";
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}