#include<bits/stdc++.h>
 using namespace std;

 bool isPrime(int n){
    for (int i=2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    } 
    return 1;
 }

 int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Is a prime number. "<<endl;
    }
    else{
        cout<<"Is not a prime number. "<<endl;
    }

 }