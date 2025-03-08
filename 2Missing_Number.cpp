#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    bool p=false;
    for(int i=0;i<n-1;i++){int a;cin>>a;s.insert(a);}
    int ans=1;
    for(auto i=s.begin();i!=s.end();i++){
        if(*i == ans){ans++;}
        else{cout<<ans<<endl;p=true;break;}

    }
    if(!p){cout<<ans<<endl;}

    
}