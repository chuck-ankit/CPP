#include <bits/stdc++.h>

using namespace std;

void reverseInteger(int arr[],int n){
    int start=0;
    int end=n-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[10000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }   
    reverseInteger(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
