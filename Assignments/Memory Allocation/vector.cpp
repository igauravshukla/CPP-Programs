/**

Q. Implement a class vector which contains integers in sorted order. The size of the vector varies so the memory should be
dynamically allocated. It should have three data members vectorarray – a pointer to integer, maxsize – the maximum allocated
size to take care of insertions and size – actual size. Write member function to get and set value at a particular position in
vector, to insert values in vector to keep it in sorted order, print the vector. Implement the copy constructor.
Write member functions to form union and intersection of vectors.

*/

#include<iostream>
using namespace std;

class vector
{
	int *vectorarray;
	int maxsize;
	int size;

	public:
		vector()
		{
			vectorarray = 0;
		}

		vector(int s)
		{
			maxsize = 10;
			size = s;
			if(size > maxsize)
				cout<<"size will be less than 30\n";
			else
				vectorarray = new int[size];
	}

	void accept()
	{
		int i, pass, temp;
		cout<<"Enter the element of the vector:\n";
		for(i = 0 ; i < size ; i++)
			cin>>vectorarray[i];
		for(pass = 1 ; pass < size ; pass++)
		{
			for(i = 0 ; i <= pass-1 ; i++)
			{
				if(vectorarray[i] > vectorarray[i+1])
				{
					temp = vectorarray[i];
					vectorarray[i] = vectorarray[i+1];
					vectorarray[i+1] = temp;
				}
			}
		}
	}

	void display()
	{
		int i;
		cout<<"Vector :"<<endl;
		for(i=0;i<size;i++)
			cout<<vectorarray[i]<<"\t";
		cout<<"\n";
	}

	void unionv(vector,vector);

	void intersection(vector,vector);

	vector(vector &);
};

void vector :: unionv(vector v1,vector v2)
{
	int i, j, k, *v;
	v = new int [v1.size + v2.size];
	for(i=0;i<v1.size;i++)
		v[i] = v1.vectorarray[i];
	j = v1.size;
	for(i=0 ; i < v2.size ; i++)
	{
		for(k=0 ; k<j ; k++)
		{
			if(v[k] == v2.vectorarray[i])
				break;
		}
		if(k == j)
		{
			v[j] = v2.vectorarray[i];
			j++;
		}
	}
	cout<<"Union of two sets of vector:\n";
	for(i=0 ; i<j ; i++)
		cout<<v[i]<<"\t";
	cout<<endl;
}

void vector :: intersection(vector v1 , vector v2)
{
	int i, j, k, *v;
	k = 0;
	v = new int[20];
	for(i=0 ; i < v1.size ; i++)
	{
		for(j=0 ; j < v2.size ; j++)
		{
			if(v1.vectorarray[i] == v2.vectorarray[j])
				break;
		}
		if(j < v2.size)
		{
			v[k] = v1.vectorarray[i];
			k++;
		}
	}
	cout<<"Intersection of two sets of vector :\n";
	for(i=0 ; i < k ; i++)
		cout<<v[i]<<"\t";
	cout<<endl;
}

vector :: vector(vector &v1)
{ 
	size = v1.size;
	vectorarray = new int[size];
	int i;
	for(i=0 ; i < size ; i++)
		vectorarray[i] = v1.vectorarray[i];
}

int main()
{
	int s1,s2;
	cout<<"Enter the size of first vector : ";
	cin>>s1;
	vector v1(s1);
	v1.accept();

	cout<<"Enter the size of second vector : ";
    cin>>s2;
    vector v2(s2);
    v2.accept();

	v1.display();
	v2.display();

	vector v4,v5;
	v4.unionv(v1,v2);
	v5.intersection(v1,v2);

	cout<<"Using copy constructor copied 1st vector into another vector"<<endl;
	vector v0(v1);
	v0.display();
	return 0;
}


/**	OUTPUT

Enter the size of first vector : 6
Enter the element of the vector:
1 4 2 6 8 9
Enter the size of second vector : 4
Enter the element of the vector:
6 8 12 23
Vector :
1       2       4       6       8       9
Vector :
6       8       12      23
Union of two sets of vector:
1       2       4       6       8       9       12      23
Intersection of two sets of vector :
6       8
Using copy constructor copied 1st vector into another vector
Vector :
1       2       4       6       8       9

*/
