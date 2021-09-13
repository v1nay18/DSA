#include <bits/stdc++.h>
using namespace std;
void willPresentToday(int n, int m, int k)
{
    if ((n - m) > k)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}
int main()
{
    int classDuration, timeForSetup, timeForPres, studentCount, exemptedCount;
    cin >> classDuration >> timeForSetup >> timeForPres >> studentCount >> exemptedCount;
    int remain = classDuration - timeForSetup;
    int remainStu = studentCount - exemptedCount;
    int n = (remainStu - 1) * timeForPres;
    willPresentToday(remain, n, timeForPres);

    return 0;
}