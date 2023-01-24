#include <iostream>
using namespace std;

int main() {
	int T ;
	cin >> T  ;
	while(T--){
	    int A,B,C,total ;
	    cin >> A >> B >> C ;
	    total = A+B+C ;
	    if(A >= 10 && B >= 10 && C >=10 && total >= 100){
	        cout << "PASS" << endl ;
	    }
	    else{
	        cout << "FAIL" << endl ;
	    }
	}
	return 0;
}
