#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    int ans = (factorial(n))/(factorial(r)*factorial(n-r));

    return ans;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<"The Answer is :"<<nCr(n,r)<<endl;


}