#include <iostream>
//#include<conio.h>
using namespace std;
template <class myClass>
class myArray
{
	private:
		int maxSize;
		int startDiff;
		int listStartCpy;
		int listEndCpy;
		myClass *list;

	public:
	
		myArray(int size)//constructor
	{ 
		list = new myClass[size];
	}
	myArray(int listStart,int listEnd)//again a constructor
	{   
		if(listStart==0)
			maxSize = listEnd;
		else 
		{	listStartCpy=listStart;
		 	listEndCpy=listEnd;
			startDiff=0-listStart;
			listStart=listStart+startDiff;
			listEnd=listEnd+startDiff;
			maxSize = listEnd;
		}
		list = new myClass[maxSize];
	}
	
	void show(int pos)
	{	int temp=0-listStartCpy;
		if(pos>=listStartCpy&&pos<listEndCpy)
		cout<<endl<<"INTEGER AT INDEX "<<pos<<":\t"<<list[pos+temp];
		else
		{
			cout<<endl<<"ARRAY INDEX OUT OF BOUND";
		}
	}
	void display(int start,int end)
	{	int a=0;
		for(int i=start;i<end;i++)
		{
			cout<<endl<<"INTEGER AT INDEX "<<i<<":\t"<<list[a++]<<endl;
		}
	
	}
	void insert(const myClass& item, int position)
	{
		if(position >= 0 && position < maxSize);
		list[position] = item;
	}

	~myArray()//destructor
	{
		delete [] list;
	}

	};

int main()
{
	int size,i,number,startIndex,endIndex,diff,ind;
	cout<<"ENTER THE SIZE OF ARRAY:";
	cin>>size;
	myArray<int> list(size);

	cout <<endl<<"Enter "<<size<<" INTEGERS:"; 
	for (i = 0; i < size; i++) 
	{
		cin >> number; 
		list.insert(number, i); 
	}
	list.display(0,size);

	cout<<endl<<"ENTER THE STARTING INDEX OF ARRAY(NOT ZERO)";
	cin>>startIndex;
	cout<<endl<<"ENTER THE ENDING INDEX OF ARRAY";
	cin>>endIndex;
	myArray<int> myList(startIndex, endIndex);
	diff=endIndex-startIndex;
	cout <<endl<< "Enter "<<diff<<" integers:";
	for (i=0;i<diff;i++) 
	{
		cin>>number; 
		myList.insert(number, i); 
	}
	myList.display(startIndex,endIndex);

	cout<<endl<<"ENTER THE INDEX WHOSE VALUE IS TO BE DISPLAYED";
	cin>>ind;
	myList.show(ind);
	//getch();
	return 0;
}
