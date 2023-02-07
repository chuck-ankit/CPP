/*
ii) compare() method: C++ has in-built compare() 
function in order to compare two strings efficiently.

The compare() function compares two strings and 
returns the following values according to the 
matching cases:

Returns 0 if both the strings are the same.
Returns <0 if the first string’s character’s
value is smaller than the second string input.
Returns >0 when the second string is greater in comparison.


Syntax:

str1.compare(str2);

*/

#include<iostream>
#include<cstring>

using namespace std;

int main(){
    string str1 = "Ankit ";
    string str2 = "Kumar ";
    string str3 = "Ankit ";

    int r1 = str1.compare(str2);
    int r2 = str2.compare(str3);
    int r3 = str3.compare(str1);

    cout<<r1<<endl;
    cout<<r2<<endl;
    cout<<r3<<endl;

    return 0;

}