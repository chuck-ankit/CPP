#include<iostream>
using namespace std ;

int main(){
    int T ;
    cin >> T ;
    while(T--){
        int A,B,rem ;
        cin >> A >> B ;
        rem = A%B ;
        cout << rem << endl ;
    }
    return 0 ;
}