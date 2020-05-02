/**

Q. Write the definition for a class called “cuboidSolid” that has length, breadth, height and mass has float data members.
The class has the following member functions.
	float getVolume() that returns the volume of the metal
	float getSurfaceArea() that returns the surface area
	float getDensity() that returns the density

Write a main program to illustrate the use of above class.

*/

#include<iostream>
using namespace std;

class cuboidSolid
{
	public:
		float l,b,h,m,v1,v2,v3;
		void volume()
		{
			cout<<"\nEnter dimentions of cuboid(length,Breadth,Height):"<<endl;
			cin>>l>>b>>h;
			v1 = l*b*h;
			cout<<"The volume of cuboid is:\n"<<v1;
		}

		void sa()
		{
			cout<<"\nEnter dimention of cuboid(Length,Breadth,Height):"<<endl;
			cin>>l>>b>>h;
			v2 = (2*(l*b+h*b+h*l));
			cout<<"The surface area of cuboid is:\n"<<v2;
		}

		void density()
		{
			cout<<"\nEnter dimentions of cuboid(mass and volume):"<<endl;
			cin>>m>>v1;
			v3 = (m/v1);
			cout<<"The surfase area of cuboid is :\n"<<v3;
		}
}c1;

int main()
{
	c1.volume();
	c1.sa();
	c1.density();
	return 0;
}

/** OUTPUT

$ ./a.out

Enter dimentions of cuboid(length,Breadth,Height):
2 3 2 
The volume of cuboid is:
12

Enter dimention of cuboid(Length,Breadth,Height):
2 3 2
The surface area of cuboid is:
32

Enter dimentions of cuboid(mass and volume):
12 6
The surfase area of cuboid is :
2

*/

