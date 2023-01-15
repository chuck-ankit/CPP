#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int x1,x2,y1,y2;
        double r1 = (x1*x1)+(y1*y1);
	    double d1= sqrt(r1);
        double r2=(x2*x2)+(y2*y2);
	    double d2= sqrt(r2);
	    if(d1>d2){
	        cout<<"ALEX"<<endl;
	    }
	    else if(d2>d1){
	        cout<<"BOB"<<endl;
	    }
	    else if(d1=d2){
	        cout<<"EQUAL"<<endl;
	    }
	}
	return 0;
}
