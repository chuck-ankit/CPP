#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int  N;
	    cin>>N;
	    int A[100000];
	    int B[100000];
	    for(int i=0;i++;i<N){
	        cin>> A[i] >> B[i];
	    }
	    int max = A[0],k;
	    int max_1 = B[0];
	    for(int j=0;j++;j<N){
	        if(A[j]>max){
	            max=A[j];
	            k=j;
	        }
	        else if(A[j]=max){
	            if(B[j]>max_1){
	                max_1=B[j];
	                k=j;
	            }
	        }
	    }
	    cout<<k<<endl;
	}
	return 0;
}
