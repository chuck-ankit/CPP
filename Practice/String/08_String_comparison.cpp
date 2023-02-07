/*
String Comparison
To check if the two strings are equal or not, 
a string comparison is done. Strings in C++ 
can be compared using either of the following techniques:

strcmp() method
compare() method
Relational Operators
 

i) strcmp() method: C++ String has got in-built functions 
for data of string type. To compare two strings, we can 
use the cstring strcmp() function.
The strcmp() function compares two strings in lexicographical manner.

Syntax:

int strcmp(const char * leftStr, const char * rightStr);
*/
// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char str1[50] = "Ankit ";
//     char str2[50] = "Kumar___ +!" ;
//     int res1 = strcmp(str1,str2);
//     int res2 = strcmp(str2,str1);
//     cout << res1 << endl;
//     cout << res2 << endl;
//     return 0;
 
// }
#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str1[50] = "Coding";
    char str2[50] = " Ninjas!";
    int res1 = strcmp(str1, str2);
    int res2 = strcmp(str2, str1);
    cout << res1 << endl;
    cout << res2 << endl;
    return 0;
}
