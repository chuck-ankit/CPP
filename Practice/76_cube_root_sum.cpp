#include <bits/stdc++.h> 
using namespace std;
/*
		Time Complexity: O(N^(1/3))
		Space Complexity: O(1)
		
		where N is the given integer.
*/

// Function to find whether an integer is perfect cube or not.
bool isCube(int c) {

    // Finding the cubeRoot of c.
    int cubeRoot = cbrtl(c);
    /*
    	If cube of cubeRoot is equals to c,
    	then it is perfect cube.
    */
    if (cubeRoot * cubeRoot * cubeRoot == c) {
        return true;
    }
    
    return false;
}


int countCubeSumPairs(int n) {

    // Counter counting the number of pairs of (a,b).
    int count = 0;
    // Finding the valid upper limit value of 'a'.
    int cubeRoot = cbrtl(n) + 1;
    // Iterating through all the possible values of 'a'.
    for (int a = 1; a <= cubeRoot; a++) {
        // Calculating value of 'a'^3.
        int a3 = a * a * a;
        // Calculating 'n' - 'a'^3 which is the possible value of 'b'^3.
        int possibleB3 = n - a3;
        /*
        	If possibleB3 is a positive interger and a perfect cube as well,
        	in that case we can find the value of 'b' for given 'a'.
        */
        if (possibleB3 >= 0 && isCube(possibleB3)) {
            count += 1;
        }

    }

    // Returning the count of required (a,b) pairs for given 'n'.
    return count;
}



int main(){
    int n;
    cin>>n;
    cout<<countCubeSumPairs(n);
}