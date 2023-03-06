//1539. Kth Missing Positive Number
/*
Given an array arr of positive integers sorted in a strictly 
increasing order, and an integer k.
Return the kth positive integer that is missing from this array.

Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
Example 2:

Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        //i: consider arr[1...i], index is 1-based
        int l = 0, r = arr.size();
        int m;
        
        while(l < r){
            m = (l+r+1) >> 1;
            // cout << l << ", " << m << ", " << r << endl;
            // if(m > 0) cout << "m: " << arr[m-1] - m << endl;
            
            /*
            arr[1...m] - m: 
            in the range arr[1...m](index is 1-based),
            there are m numbers not missing,
            so the number of missing numbers is arr[m] - m
            */
            if(m == 0 || arr[m-1] - m < k){
                l = m;
            }else{
                r = m-1;
            }
        }
        
        return l + k;
    }
};