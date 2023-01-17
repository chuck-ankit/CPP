#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    float x1,x2,y1,y2;
	    cin>>x1>>y1>>x2>>y2;
	    float d1=sqrt((x1*x1)+(y1*y1));
	    float d2=sqrt((x2*x2)+(y2*y2));
	    if(d1>d2){
	        cout<<"ALEX"<<endl;
	    }
	    else if(d2>d1){
	        cout<<"BOB"<<endl;
	    }
	    else if(d1==d2){
	        cout<<"EQUAL"<<endl;
	    }
	}
	return 0;
}