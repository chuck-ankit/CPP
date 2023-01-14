#include<bits/stdc++.h>

using namespace std;
void printArray(int arr[], int size){
    for(int i=0; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int first[10]={1,2};
    printArray(first,10);
    // int n=10;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<first[i]<<" ";
    // }
    
    int second[10]={0};
    printArray(second,10);

    int third[10]={1};
    printArray(third,10);

    int thirdsize = sizeof(third)/sizeof(int);
    cout<<"Size of third arrray is"<<thirdsize<<endl;
    
    
}