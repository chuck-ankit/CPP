#include<bits/stdc++.h>

using namespace std;

int Ap(int n){
    int Tn= (3*n+7);

    return Tn;
}
int main()
{
    int n;
    cin>>n;
    
    cout<<"The value of Nth term is :"<< Ap(n) <<endl;
}