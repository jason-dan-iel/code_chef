#include<iostream>

using namespace std;

int A, B, X, Y, t;

// "Chef\n"
// "Chefina\n"



void solve(){
    cin>>A>>B>>X>>Y;
    float steps_A = 0,steps_B = 0;
    steps_A = (float)A/X;
    steps_B = (float)B/Y;

    // // cout<<steps_A<<" "<<steps_B<<endl;
    // cout<<A<<" "<<B<<" "<<X<<" "<<Y<<" "<<steps_A<<" "<<steps_B<<endl;
    if (steps_A == steps_B)
        cout<<"Both\n";
    else if (steps_A > steps_B)
        cout<<"Chefina\n";
    else cout<<"Chef\n";
}
int main(){
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}