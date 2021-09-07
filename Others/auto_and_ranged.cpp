#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<pair<int,int>> vp ={{1,2},{3,4},{2,0}};
    for (int value : v)
    {
        cout << value << "."; //this value is the copy
    }
    for(int &value: v){
        value+=value+v[2];
        cout<<value<<"###"<<endl; //here &value is refrenced;
    }
    for(auto &value : vp){
        cout<<value.first+2<<" "<< value.second+2<<endl;
    }
    return 0;
}