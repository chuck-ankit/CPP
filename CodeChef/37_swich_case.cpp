//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isInRange(int N){
        switch (N)
        {
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
            break;
        case 5:
            cout<<"Five"<<endl;
            break;
        case 6:
            cout<<"Six"<<endl;
            break;
        case 7:
            cout<<"Seven"<<endl;
            break;
        case 8:
            cout<<"Eight"<<endl;
            break;
        case 9:
            cout<<"Nine"<<endl;
            break;
        case 10:
            cout<<"Ten"<<endl;
            break;
        default:
            cout<<"not in range"<<endl;
            break;
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isInRange(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends