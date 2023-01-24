#include<bits/stdc++.h>

using namespace std;

unsigned int countsetbits(int n){
    unsigned int count = 0;
    while(n){
        count = count + (n&1);
        n >>= 1;
    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<endl;
    int sum = countsetbits(a)+countsetbits(b);
    cout<<"The sum of set bits is : "<<sum <<endl;
    return 0;
}