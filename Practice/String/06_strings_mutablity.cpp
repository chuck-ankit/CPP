#include <iostream>
#include <string>
using namespace std;

int main() {
    string str("coding Ninjas.");
    str.front() = 'C';
    str.back() = '!';
    cout << str << endl;
    return 0;
}
// str.front()
// str.back() 