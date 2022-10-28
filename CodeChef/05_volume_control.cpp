#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	cin >> T;
	for(int i = 0 ; i<T ; i++){
	    int X,Y,num;
	    cin >> X >> Y;
	    if (X>Y){
	        num = X-Y ;
	    }
	    else{
	        num = Y-X ;
	    }
        cout << num << endl ;
	}
	return 0;
}
