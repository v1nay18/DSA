#include <bits/stdc++.h>
using namespace std;
void pmsi(map<string,int> &m){
    cout<<m.size()<<endl;
    for(auto &si : m){
        cout<<si.first<<" "<<si.second<<endl;
    }
}
int main()
{
   map<string,int> m;
int n;
cout<<"enter the size of maps"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    m[s]++;
}



   // m.insert({"abc",3});
   // //m.insert({"def",3});
   // m.insert({"abc",3});
   // //m.insert({"ghj",3});
   // m.insert({"jkl",3});
   // m.insert({"ghj",3});
   // m.insert({"ghj",3});
   // m.insert({"abc",3});
pmsi(m);
    return 0;
}