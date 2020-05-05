/**

Q. Implement a class ‘sequence’ which contains a sequence of strings. The size of each string varies so also the number of
strings in a sequence hence memory should be dynamically allocated. The constructor should accept the number of strings and
each of the strings to be added to the sequence. Write member function to print the sequence and search a string in the
sequence. Implement the copy constructor. Write a function reverse that reverses the sequence. Write a friend function
intersection that takes two sequences and returns a sequence containing common strings.

*/

#include<iostream>
#include<string.h>
using namespace std;

class sequence
{
	char **str;
	int no;
	public:
		sequence();
		sequence(int n);
		sequence(const sequence& s);
		void display();
		void search(char *str);
		void reverse();
		friend sequence intersection(sequence&,sequence&);
};

sequence :: sequence()
{ }

sequence :: sequence(int n)
{
	no = n;
	char temp[20];
	str = new char* [no];
	for(int i=0 ; i<no ; i++)
	{
		cout<<"Enter the string "<<i+1<<" : ";
		cin>>temp;
		str[i] = new char[strlen(temp)+1];
		strcpy(str[i],temp);
	}
}

void sequence :: display()
{
	cout<<"The sequence is:\n";
	for(int i=0 ; i<no ; i++)
		cout<<str[i]<<" ";
}

void sequence :: search(char *key)
{
	for(int i=0 ; i<no ; i++)
		if(strcmp(str[i] , key) == 0)
		{
			cout<<"String found at position "<<i+1<<"\n";
			return;
		}
		cout<<"String not found\n";
}

void sequence :: reverse()
{
	char temp[20];
	for(int i=0, j=no-1 ; i<no/2 ; i++,j--)
	{
		strcpy(temp, str[i]);
		strcpy(str[i],str[j]);
		strcpy(str[j],temp);
	}
	cout<<"\n\nAfter reversing, ";
}

sequence :: sequence(const sequence& s)
  {
   no= s.no;
   str=new char* [no];
   for(int i=0; i<no; i++)
    {
     str[i]= new char[strlen(s.str[i])+1];
     strcpy(str[i], s.str[i]);
    }
   }

sequence intersection(sequence& s1 , sequence& s2)
{
	sequence temp;
	int k = 0;
	temp.no = 0;
//	temp.no = s1.no + s2.no;
	temp.str = new char* [s2.no];
	for(int i=0 ; i<s1.no ; i++)
	{
		for(int j=0 ;j<s2.no ; j++)
		{
			if(strcmp(s1.str[i], s2.str[j])==0)
			{
				temp.str[k] = new char[strlen(s2.str[j])+1];
				strcpy(temp.str[k++],s2.str[j]);
				temp.no++;
			}
		}
	}
	return temp;
}

int main()
{
	char key[20];
	cout<<"Enter the strings in 1st sequence :\n";
	sequence s1(4);
	s1.display();
	s1.reverse();
	s1.display();
	cout<<"\n\nEnter string to search : ";
	cin>>key;
	s1.search(key);
	cout<<"\nEnter the strings in 2nd sequence :\n";
	sequence s2(3);
	s2.display();
	cout<<"\n\nAfter intersection, ";
	sequence s3 = intersection(s1,s2);
	s3.display();
	cout<<"\n\nCopied constructor's sequence is :\n";
	sequence s4(s1);
	s4.display();
	return 0;
}

/** OUTPUT

Enter the strings in 1st sequence :
Enter the string 1 : gaurav
Enter the string 2 : bhai
Enter the string 3 : don
Enter the string 4 : ramya
The sequence is:
gaurav bhai don ramya 

After reversing, The sequence is:
ramya don bhai gaurav 

Enter string to search : ramya
String found at position 1

Enter the strings in 2nd sequence :
Enter the string 1 : gauri
Enter the string 2 : bhai
Enter the string 3 : ram
The sequence is:
gauri bhai ram 

After intersection, The sequence is:
bhai 

Copied constructor's sequence is :
The sequence is:
ramya don bhai gaurav

*/

/**	OUTPUT

Enter the strings in 1st sequence :
Enter the string 1 : gaurav
Enter the string 2 : bhai
Enter the string 3 : don
Enter the string 4 : ramya
The sequence is:
gaurav bhai don ramya

After reversing, The sequence is:
ramya don bhai gaurav

Enter string to search : ramu
String not found

Enter the strings in 2nd sequence :
Enter the string 1 : gauri
Enter the string 2 : bhai
Enter the string 3 : ram
The sequence is:
gauri bhai ram

After intersection, The sequence is:
bhai 

Copied constructor's sequence is :
The sequence is:
ramya don bhai gaurav

*/
