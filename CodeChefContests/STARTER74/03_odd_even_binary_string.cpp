#include <iostream>
using namespace std;

int main() {
	int m;
	cin>>m;
	while(m--){
	    int t;
	    cin>>t;
	    int s=0;
	    for(int i=0;i<t;i++){
	        int a;cin>>a;
	        if(a==0)
	        s++;
	    }
	    
	    if(s%2==0) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
