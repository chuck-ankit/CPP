#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int N, S, minimum = 0, maximum = 0;
	cin >> N >> S;
	minimum = min(N, S);
	maximum = max(N, S);
	
    for(int i = 0; i < 2 * N; i++)
    {
        if(i + minimum == S)
        {
            cout << abs(minimum - i) << endl;
            break;
        }
    }
}

int main() {
	
	int T;
	cin >> T;
	while(T--)
	{
        solution();
	}
	return 0;
}