#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
            if (d[i]>=1000){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}