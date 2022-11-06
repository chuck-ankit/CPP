#include<iostream>
using namespace std;

int main(){
    int n1,n2,diff,sum;
    cin>>n1>>n2;
    if(n1>n2){
        diff = n1 - n2 ;
        cout<<diff<<endl ;
    }
    else{
        sum = n1+n2 ;
        cout<<sum<<endl;
    }
}