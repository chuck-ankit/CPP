#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        long factorial = 1.0;
        cin >> n;
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout<<factorial<<endl;
    }

    return 0;
}
