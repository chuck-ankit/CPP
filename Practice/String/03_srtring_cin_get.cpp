//Taking input from the user using cin.get

#include<iostream>

using namespace std;

int main(){
    char str[50];
    cout<<"Enter a string: ";
    cin.get(str,50);
    cout<<"You  Entered: "<<str << endl;
    return 0;
}
