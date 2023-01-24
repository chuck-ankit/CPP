#include<iostream>
using namespace std;

int main(){
    int  T;
    cin >> T ;
    while(T--){
        int x,y,min;
        cin >>x>>y ;
        if(x*100<y*10){
            cout << "Disposable" << endl ;
        }
        else {
            cout << "Cloth" << endl ;
        }
    }
}