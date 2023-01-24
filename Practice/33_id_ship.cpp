#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string i;
        cin >> i ;
        if(i =="B" | i =="b"){
            cout<<"BattleShip"<<endl;
        }
        else if (i == "C" | i =="c"){
            cout<<"Cruiser"<<endl;
        }
        else if (i == "D" | i =="d"){
            cout<<"Destroyer"<<endl;
        }else if (i == "F" | i =="f"){
            cout<<"Frigate"<<endl;
        }
    }
}