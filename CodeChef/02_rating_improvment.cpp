#include<iostream>
    using namespace std;
    int main(){
        int T;
	    cin >> T;
	    for(int i =0; i < T; i++){
	        int X,Y,Z;
	        (cin >> X ) >> Y;
	        Z = X+200;
	        if(X <= Y && Z >= Y){
	        cout << "YES";
	        }else{
	            cout << "NO";
	        }
	        cout << "\n";
	    }
        return 0 ;
    }
    