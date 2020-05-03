/**

Q. Write the definition for a class called rectangle that has floating point data members length and width.
The class has the following member functions:
	void setlength(float) to set the length of data member
	void setwidth(float) to set the width of data member
	float perimeter() to calculate and return the perimeter of the rectangle
	float area() to calculate and return the area of the rectangle
	void show() to display the length and width of the rectangle

Write main function to create two rectangle objects and display each rectangle and its area
and perimeter.

*/

#include<iostream>
using namespace std;

class rectangle
{
	public:
	float l,b,p,a;
	
	void setlength(float length)
	{
		l = length;
	}
	void setwidth(float width)
	{
		b = width;
	}
	float perimeter()
	{
		p = 2*(l+b);
		cout<<"\nPerimeter of triangle is:\n"<<p;
	}
	float area()
	{
		a = l*b;
		cout<<"\nArea of rectangle is:\n"<<a;
	
	}
	void show()
	{
		cout<<"\nLength and width is:\n";
		cout<<l<<" and "<<b;
	}
};

int  main()
{
	float l, b;
	rectangle r1,r2;
	cout<<"Length = ";
	cin>>l;
	cout<<"Width = ";
	cin>>b;
	r1.setlength(l);
	r1.setwidth(b);	
	r1.show();
	r1.perimeter();
	r1.area();	
}   

/** OUTPUT

$ ./a.out
Length = 2
Width = 4

Length and width is:
2 and 4
Perimeter of triangle is:
12
Area of rectangle is:
8

*/ 

