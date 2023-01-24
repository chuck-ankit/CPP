#include<bits/stdc++.h>
using namespace std;

int main(){
    int p1,p2,p3,p4;
    cin>>p1>>p2>>p3>>p4;
    int tot = 0;
    if(p1>=10){
        tot++;
    }
    if(p2>=10)
    {
        tot++;
    }
    if(p3>=10)
    {
        tot++;
    }
    if(p4>=10)
    {
        tot++;
    }
    cout<<tot<<endl;
}