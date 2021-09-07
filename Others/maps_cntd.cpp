#include <bits/stdc++.h>
using namespace std;
void mpii(map<int,int> &m){
    cout<<m.size()<<endl;
    for(auto &mp : m){
        cout<<mp.first<<" "<<mp.second<<endl;
    }
}
int main(){
map<int,int> mop;
int n;
cout<<"Enter the size of map"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    mop[x]++;
}
mpii(mop);
    return 0;
}