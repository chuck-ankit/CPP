#include<iostream>
using namespace std;

int Sum(int n){
    if(n==0){
        return 0;
    }
    int preSum = Sum(n-1);
    return n+preSum;
}

int main(){

int n;
cin>>n;
cout<<Sum(n)<<endl;

return 0;
}