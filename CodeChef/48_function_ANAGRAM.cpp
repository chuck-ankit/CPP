/*An anagram of a string is another string that contains same characters, 
only the order of characters can be different. For example, “act” and “tac” 
are anagram of each other. Invest your time to study the locked code and 
complete it accordingly.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student
{
    private:
    string first_name;
    string last_name;
    
    public:
    void set_name(string f, string l)
    {
        first_name = f;
        last_name = l;
    }
       
    friend void check_name(student k);
};

    
// } Driver Code Ends
//User function Template for C++

void check_name(student k)
{
    
   string f,l;
   f = k.first_name;
   l = k.last_name;
   
   sort(f.begin(), f.end());
   sort(l.begin(), l.end());
   
   if(f==l){cout<< "ANAGRAM"<<endl;}
   
   else{
   cout<< "NOT ANAGRAM"<<endl;}
}

  
  
  
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   
	    string f,l;
	    cin>>f>>l;
	   
	    student s1;
	    s1.set_name(f,l);
	    check_name(s1);
	    
	    
	    
	}
	return 0;
}
