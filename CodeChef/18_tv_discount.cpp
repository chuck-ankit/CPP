#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int m,n;
	    m=a-c;
	    n=b-d;
	    if(m>n)
	    {
	       cout<<"Second"<<endl;
	    }
	    else if(m<n)
	    {
	        cout<<"First"<<endl;
	    }
	    else
	    {
	        cout<<"Any"<<endl;
	    }
	}
	
	return 0;
}