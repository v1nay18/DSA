#include <iostream>
using namespace std;

int main()
{
    char c;
    c = cin.get();
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    while (c != '$')
    {
        count++;
        c = cin.get();

        while (c >= 97 && c <= 122)
        {
            count1++;
        }
        while (c == 32)
        {
            count2++;
        }
    }

    int alph = count - (count1 + count2);
    cout << count1 << " " << alph << " " << count2;
    cout << count << endl;
}
