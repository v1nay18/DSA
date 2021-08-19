#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if (n > 10)
    {
        cout << "You won" << endl;
    }
    else
    {
        cout << "You Lost" << endl;
    }
    return 0;
}