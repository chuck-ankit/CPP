
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	
	int sum(int arr[], int n) {
        int Sum = 0;
	    for(int j=0 ;j<n;j++){
            Sum= Sum + arr[j];
        }
        
        return Sum;
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
