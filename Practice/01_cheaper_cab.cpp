#include <iostream>
using namespace std;

int main() {
    int X,Y;
	cin >> X;
	cin >> Y;
	if(X>Y){
	    cout << "FIRST" << endl;
	}
	else if(Y>X){
	    cout << "SECOND" << endl;
	}
	else if(X==Y){
	    cout << "ANY" << endl;
	}
	return 0;
}
