/*
Task :
You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Input Format :
Input will contain four integers -a,b,c,d one in each line.

Output Format :
Print the greatest of the four integers.
Note: I/O will be automatically handled.

Sample Input :
3
4
6
5

Sample Output :
6

*/

#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int m1=(a>b)?a:b;
    int m2=(c>d)?c:d;
    return (m1>m2?m1:m2);
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
