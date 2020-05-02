/**

Q. Write the definition for a class called ‘time’ that has hours, minutes & seconds as integer data members. The class has the
following member functions:
	void settime(int, int, int) to set the specified values of hours, minutes and seconds in object
	void showtime() to display contents of time object
	time add(time) add the corresponding values of hours, minutes and seconds (<60) in time object argument to current time
		object and make appropriate conversions and return time
	time diff(time) subtract values of hours, minutes and seconds in time object argument from	current time object after
		making appropriate conversions and return time difference

Write a main program to illustrate the use of above class.

*/

#include<iostream>
using namespace std;

class time
{
	int hr, min, sec;
	public:
		void settime(int h,int m,int s)
		{
	        hr = h;
	        min = m;
	        sec = s;
		}

		void showtime()
		{
			cout<<hr<<":"<<min<<":"<<sec<<endl;
		}

		void addtime(time , time);
		void difftime(time , time);
}t1,t2,t3,t4;

void time :: addtime(time t1 , time t2)
{
	sec=t1.sec+t2.sec;
	min=sec/60;
	sec=sec%60;
	min=min+t1.sec+t2.sec;
	hr=min/60;
	min=min%60;
	hr=(hr+t1.hr+t2.hr)%24;
}

void time :: difftime(time t1,time t2)
{
	sec=t1.sec-t2.sec;
	if(sec<0)
	{
		sec=t1.sec+60-t2.sec;
		t1.min--;
	}
	min=t1.min-t2.min;
	if(min<0)
	{
		min=t1.min+60-t2.min;
		t1.hr--;
	}
	hr=t1.hr-t2.hr;
	if(hr<0)
	{
		hr=t1.hr+24-t2.hr;
	}
}

int main()
{
	int hh,mm,ss;
	cout<<"Enter time(HH:MM:SS)\n";
	cin>>hh>>mm>>ss;
	t1.settime(hh , mm , ss);

	cout<<"Enter time again(HH:MM:SS)\n";
	cin>>hh>>mm>>ss;
	t2.settime(hh , mm , ss);

	t3.addtime(t1 , t2);
	t4.difftime(t1 , t2);

	cout<<"Time is :\n";
	t1.showtime();

	cout<<"Time t2\n";
	t2.showtime();

	cout<<"Added time  :\n";
	t3.showtime();
	
	cout<<"Difference is :\n";
	t4.showtime();

	return 0;
}


/** OUTPUT

$ ./a.out
Enter time(HH:MM:SS)
3 59 59
Enter time again(HH:MM:SS)
0 0 01
Time is :
3:59:59
Time t2
0:0:1
Added time  :
4:1:0
Difference is :
3:59:58

*/

