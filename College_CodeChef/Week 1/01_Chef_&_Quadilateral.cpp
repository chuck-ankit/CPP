#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int op1 = a+c ; 
        int op2 = b+d ;
        if(op1==180 && op2==180){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}