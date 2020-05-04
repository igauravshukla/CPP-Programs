/*

Q. Write a program showing variations of creating copy constructor.

*/

#include<iostream>
using namespace std;

class copyconstructor
{
	private:
		int v1,v2,v3;
	public:
		copyconstructor();

		copyconstructor(copyconstructor&);

		void show()
		{
			cout<<"Variable 1: "<<v1<<endl;
			cout<<"Variable 2: "<<v2<<endl;
			cout<<"Variable 3: "<<v3<<endl;
		}
};

copyconstructor :: copyconstructor()
{
	v1 = 28;
	v2 = 15;
	v3 = 30;
}

copyconstructor :: copyconstructor(copyconstructor& c1)
{
	v1 = c1.v1;
	v2 = c1.v2;
	v3 = c1.v3;
}

int main()
{
	copyconstructor c2;
	copyconstructor c3(c2);
	copyconstructor c4 = c2;
	copyconstructor c5 = c3;
	cout<<"The output of default constructor is "<<endl;
	c3.show();
	cout<<"The output of second constructor is "<<endl;
	c4.show();
	cout<<"The output of third constructor is "<<endl;
	c5.show();
	return 0;
}

/** OUTPUT

The output of default constructor is
Variable 1: 28
Variable 2: 15
Variable 3: 30
The output of second constructor is
Variable 1: 28
Variable 2: 15
Variable 3: 30
The output of third constructor is
Variable 1: 28
Variable 2: 15
Variable 3: 30

*/

