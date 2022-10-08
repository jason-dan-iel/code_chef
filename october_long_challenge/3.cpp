#include<iostream>

using namespace std;

int A, B, speed_a, speed_b, t;
int stepsa = 0;
int stepsb = 0;

void solve(){
    cin>>A>>B>>speed_a>>speed_b;
    while(A>0){
        stepsa+=1;
        A-= speed_a;
    }
    while(B>0){
        stepsb += 1;
        B-= speed_b;
    }
    if(stepsb > stepsa)
        cout<<"Chef\n";
    else if (stepsb < stepsa)
        cout<<"Chefina\n";
    else 
        cout<<"Both\n";
}
int main(){
    cin>>t;
    while(t--)
        solve();
    return 0;
}