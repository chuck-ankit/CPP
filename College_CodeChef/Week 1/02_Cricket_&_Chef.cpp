#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, o, c;
    
    cin >> r>>o>>c;
    
    float max = (20 - o) * 36;
    if (max > (r - c))
    {
        cout << "\nYes" << endl;
    }
    else if (max <= (r - c))
    {
        cout << "\nNo" << endl;
    }
    return 0;
}