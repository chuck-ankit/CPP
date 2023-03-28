#include<iostream>
using namespace std;

int factortial(int n){

    if(n==0){
        return 1;
    }
    int prevfact = factortial(n-1);
    return n* prevfact;
}

int main(){
    int n;
    cin>>n;
    cout<<factortial(n)<<endl;
}