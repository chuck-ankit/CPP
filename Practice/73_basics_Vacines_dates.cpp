#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int d,l,r;
	    cin>>d>>l>>r;
	    if(d<l){
	        cout<<"Too Early"<<endl;
	        
	    }
	    if(d>=l && d<=r){
	        cout<<"Take second dose now"<<endl;
	    }
	    else if(d>r){
	        cout<<"Too Late"<<endl;
	    }
	}
	return 0;
}
