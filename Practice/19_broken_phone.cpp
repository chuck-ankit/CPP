#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<b){
            cout<<"REPAIR"<<endl;
        }
        else if(b<a){
            cout<<"NEW PHONE"<<endl;
        }
        else if(b==a){
            cout<<"ANY"<<endl;
        }
    }
    return 0;
}