#include<bits/stdc++.h>

using namespace std;
void dummy(int n)
{
    n++;
    cout<<"Value of dummy n is :" << n <<endl; 
} // namespace std;

int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<"Value of actual n is:"<<n;
}