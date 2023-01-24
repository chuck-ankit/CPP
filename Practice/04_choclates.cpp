#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	for(int i = 0 ; i<T ; i ++){
	    int X,Y,Z,num ;
	    cin >> X >> Y >> Z ;
	    num = (X*5+Y*10)/Z ;
        cout << num << endl ;
	}
	
	return 0;
}
