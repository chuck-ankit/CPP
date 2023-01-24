#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin >> T;
    for(int i = 0 ; i<T ; i++ ){
        int x,price;
        cin >> x;
        price = 100 - x ;
        cout << price << endl ;
    }
	return 0;
}