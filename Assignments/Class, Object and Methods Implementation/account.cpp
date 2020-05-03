/**

Q. Define a class account with following specifications
	private data members
		account number – automatically generated six digit account number, first two digit are used for bank code (assume the
			value 82) and next four digits for account number
		account type – it can be one of the following type { saving, current, fixed, recurring}
		amount – long integer for the balance amount
		Owner Name – name of the owner
	Public data members for
		Setting and getting account type, initial amount and Owner Name
		Display account information

Write a main program to accept information from user and open at least five accounts and display their information.

*/

#include<iostream>
using namespace std;

class account
{
	private:
		int ac, amt;
		char atype[20], onm[15];
	public:
		void accept(int ano)
		{
			ac = ano;
			cout<<"\nAccount type is(saving/current/fixed/recurring:"<<endl;
			cin>>atype;
			cout<<"\nAmount is:"<<endl;
			cin>>amt;
			cout<<"\nOwner name is:"<<endl;
			cin>>onm;
		}

		void display()
		{
			cout<<"Account number is:\n"<<ac<<endl;
			cout<<"Account type is:\n"<<atype<<endl;
			cout<<"Amount is:\n"<<amt<<endl;
			cout<<"Owner name is:\n"<<onm<<endl;
		}
};

int main()
{
	int ano=820001;
	account a1,a2;
	cout<<"\nEnter the account information:"<<endl;
	a1.accept(ano++);
	a2.accept(ano++);

	cout<<"\nDetails of information:\n"<<endl;
	a1.display();
	a2.display();

	return 0;	
}


/** OUTPUT

$ ./a.out

Enter the account information:

Account type is(saving/current/fixed/recurring:
saving

Amount is:
1200

owner name is:
vivek

Account type is(saving/current/fixed/recurring:
saving

Amount is:
3000

owner name is:
krushna


Details of information:

account number is:
820001
Account type is:
saving
Amount is:
1200
Owner name is:
vivek
account number is:
820002
Account type is:
saving
Amount is:
3000
Owner name is:
krushna

*/
