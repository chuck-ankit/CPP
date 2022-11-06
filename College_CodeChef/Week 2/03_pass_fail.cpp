#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,p,total;
        cin>>n>>x>>p;
        total = x*3-(n-x);
        if(total>=p){
            cout<<"PASS"<<endl;
            
        }
        else{
            cout<<"FAIL"<<endl;
        }
    }
}