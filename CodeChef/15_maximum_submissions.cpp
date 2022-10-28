#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,max;
        cin>> x;
        max = (x*60)/30;
        cout<< max<<endl;
    }
}