/*

Given a positive integer denoting n, do the following:
    If 1 <= n <= 9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
    If n > 9, print Greater than 9.

Input Format :
A single integer denoting n.

Constraints :
    1 <= n <= 10^9
    
Output Format :
If 1 <= n <= 10^9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, print Greater than 9 instead.

Sample Input 0
5

Sample Output 0
five

Sample Input 1
8

Sample Output 1
eight

Sample Input 2
44

Sample Output 2
Greater than 9

*/

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    if(1<=n && n<=9)
    {
        switch(n)
        {
            case 1:cout<<"one";
                    break;
            case 2:cout<<"two";
                    break;
            case 3:cout<<"three";
                    break;
            case 4:cout<<"four";
                    break;
            case 5:cout<<"five";
                    break;
            case 6:cout<<"six";
                    break;
            case 7:cout<<"seven";
                    break;
            case 8:cout<<"eight";
                    break;
            case 9:cout<<"nine";
                    break;
        }
    }
    else if(n>9)
        cout<<"Greater than 9";
    return 0;
}
