//Swaping Alternate elements in array

#include<iostream>

using namespace std;

void swap_alternate(int arr[],int n){
    for(int i =0;i<(n-1); i+=2){
        if(i+1 <n )
        {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[7]={1,4,2,4,5,10,31};
    int brr[5]={2,-3,-5,7,1};

    swap_alternate(arr,7);
    swap_alternate(brr,5);

    printArray(arr,7);
    printArray(brr,5);

}