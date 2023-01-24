#include <iostream>
using namespace std;

int main() {
	int T ;
	cin >> T;
	for (int i = 0 ; i < T ; i++){
	    int x,y;
	    cin >> x >> y ;
	   if(x==y)
	    {   if(x>0 && y>0)
	        cout<<"YES"<<endl;
	    else
	    
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
