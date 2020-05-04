/**

Q. Define a class ‘fraction’ having integer data members numerator and denominator. Define parameterized and default
constructors (default values 0 and 1). Parameterized constructor should store the fraction in reduced form after dividing both
numerator and denominator by gcd(greatest common divisor). Write a private function member to compute gcd of two integers.
Write four member functions for addition, subtraction. multiplication and division of fraction objects. Each function will have
two fraction objects as arguments. Write the main function to illustrate the use of the class.

*/

#include<iostream>
using namespace std;

class fraction
{
	int n, d;
	public:
		fraction()
		{
			n = 0;
			d = 1;
		}

		fraction(int num , int den)
		{
			n = num/gcd(num,den);
			d = den/gcd(num,den);
		}

		void display()
		{
			cout<<"n= "<<n<<"\t"<<"d= "<<d<<endl;
		}

		int gcd(int nn , int dd)
		{
			if(dd == 0)
				return nn;
			else
				return gcd(dd , nn%dd);
    	}

		float add(fraction f1 , fraction f2)
    	{
			float a;
			a = (float)(((f1.n*f2.d)+(f2.n*f1.d))/(f1.d*f2.d));
			return a;
    	}

		float sub(fraction f1 , fraction f2)
    	{
			float b;
			b = (float)(((f1.n*f2.d)-(f2.n*f1.d))/(f1.d*f2.d));
			return b;
    	}

		float mul(fraction f1 , fraction f2)
    	{
			float c;
			c = (float)(f1.n*f2.n)/(f1.d*f2.d);
			return c;
		}

		float div(fraction f1 , fraction f2)
		{
			float d;
			d = (float)(f1.n*f2.d)/(f1.d*f2.n);
			return d;
		}
};

int main()
{
	fraction f3,f4,f5,f6;
	int num, den;
	cout<<"Enter the 1st fraction: "<<endl;
	cin>>num>>den;
	fraction f1(num,den);
	f1.display();
	cout<<"Enter the 2nd fraction: "<<endl;
	cin>>num>>den;
	fraction f2(num,den);
	f2.display();
	cout<<"Addition is: "<<f3.add(f1,f2)<<endl;
	cout<<"Subtraction is: "<<f4.sub(f1,f2)<<endl;
	cout<<"Multiplication is: "<<f5.mul(f1,f2)<<endl;
	cout<<"Division is: "<<f6.div(f1,f2)<<endl;
	return 0;
}
       
/** Output

Enter the 1st fraction:
1 2
n= 1    d= 2
Enter the 2nd fraction:
2 3
n= 2    d= 3
Addition is: 1
Subtraction is: 0
Multiplication is: 0.333333
Division is: 0.75

*/

