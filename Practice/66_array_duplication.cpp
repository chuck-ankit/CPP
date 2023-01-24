#include<bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	int ans =0;
    
    //XOR ing all elements of an array
    
    for(int i=0; i<arr.size();i++){
        ans= ans^arr[i];
    }
    // XOR [n-1]
    
    for(int i=0; i<arr.size();i++){
        ans = ans^i;
    }
    return ans;
}