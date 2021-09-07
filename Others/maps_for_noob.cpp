#include <bits/stdc++.h>
using namespace std;

void m_p(map<int,int> &m){
    cout<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first+1<<" "<<pr.second-1<<endl;
    }
}
int main()
{
    map<int,int> m;
    m.insert({1,2});
    m.insert({2,2});
    m.insert({9,1});
    m.insert({0,1});
    m.insert({2,7});
    m.insert({3,4});
    m.insert({-7,0});
    m[10]=4;
    m_p(m);
    return 0;
}