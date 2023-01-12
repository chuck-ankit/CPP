
#include <bits/stdc++.h>

using namespace std;



class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<N;i++)
        {
            pq.push(arr[i]);
        }
        int ans=0;
        while(pq.size()>1)
        {
            int tmp=0;
            tmp+=pq.top();
            pq.pop();
            tmp+=pq.top();
            pq.pop();
            ans+=tmp;
            pq.push(tmp);
        }
       // ans+=pq.top();
        return ans;
    }

};


int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
