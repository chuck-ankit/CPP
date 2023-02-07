/*
iii) Relational operator: If strings are compared using relational operators,
 their characters are compared lexicographically according to the current 
 character traits, which means it starts comparison character by character 
 starting from the first character until the characters in both strings 
 are equal or a NULL character is encountered.

Relational operators return either true or false, 
true if the corresponding comparison holds, false otherwise.

Following are the Relational Operators that can be used to compare two strings:

>: Greater than
< : Less than
== : Equal to
!= : Not equal to
>=: Greater than and equal to
<=: Less than and equal to
Rules:

1. s1 < s2: A string s1 is smaller than s2 string, if either, length of s1 is shorter than s2 or first mismatched character is smaller.
2. s1 > s2: A string s1 is greater than s2 string if either, length of s1 is longer than s2, or the first mismatched character is larger.
3. <= and >= have almost the same implementation with additional features of being equal as well.
4. ==: If, after comparing lexicographically, both strings are found to be the same, then they are said to be equal.
5. !=: If any of the points from 1 to 3 follow up then, strings are said to be unequal.

*/