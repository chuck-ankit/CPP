#include <iostream>
using namespace std;

int main() {
	int t;
	while (t--){
	   int a,b,c;
	   cin>>a>>b>>c;
	   int product1=a*b;
	   int product2=b*c;
	   int product3=c*a;
	   if(product3<0 ||product2<0 ||product1<0){
	       cout<<"Yes"<<endl;
	
	   }
	   else{
	       cout<<"NO"<<endl;
	   }
	}
	return 0;
}
