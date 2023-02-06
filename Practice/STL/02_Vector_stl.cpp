#include<iostream>

#include<vector>

using namespace std;

int main(){
    vector<int> v;
    cout<< "Capicity ->"<<v.capacity()<<endl;

    v.push_back(10);
    cout<< "Capicity ->"<<v.capacity()<<endl;

    v.push_back(11);
    cout<< "Capicity ->"<<v.capacity()<<endl;

    v.push_back(12);
    cout<< "Capicity ->"<<v.capacity()<<endl;

    cout<<" Size ->" << v.size()<<endl;

    cout<<" Element at Second Element ->" <<v.at(2)<<endl;
    cout<<" First Element -> "<<v.front()<<endl;
    cout<<" Last Element  -> "<<v.back()<<endl;c
}