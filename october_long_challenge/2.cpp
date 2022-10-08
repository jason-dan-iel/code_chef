#include<iostream>

using namespace std;

int n, x,t,q;
const int slice = 4;

void solve(){
    cin>>n>>x;
    n*= x;
    q = n%slice;
    n/= slice;
    if(q!=0){
        cout<<n+1<<endl;
    }
    else cout<<n<<endl;
}

int main(){
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}