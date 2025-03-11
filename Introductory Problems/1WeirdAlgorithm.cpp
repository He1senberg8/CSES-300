#include<iostream>
using namespace std;
int main(){
    int64_t n;
    cin>>n;
    bool p=true;
    cout<<n<<" ";
    if(n!=1){
    while(n!=1 || (p==true)){
        p=false;
        if(n&1){n=n*3+1;cout<<n<<" ";}
        else{n=n/2;cout<<n<<" ";}
    }
}
    
}