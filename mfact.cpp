#include <iostream>
#include <cstdlib>
#include <string>
#define DEFAULT_ARRAY_LIMIT 50
using namespace std;
void print(string msg)
{
	cout<<msg<<endl;
}	

void exit_app(string msg)
{
	print(msg);
	print("Exiting app ....");
	exit(0);
}


/*
arr[50] ---> 0...49
low=0,high=50
arr[4..78] ---> 4....78
low=4,high=78
*/
template <class T>
class myArray
{
	T low;
	T high;
	T *arr;
	void check_index_out_of_bound(T index)
	{
		if(!(low<=index && index<high))
		{
			cout<<"For index position :"<<index<<" ";
			string msg = "Array index out of bound for position ";
			exit_app(msg);
		}
	}
	public :
	myArray()
	{
		exit_app("Need arguments for array size");
	}
	myArray(T size): low(0),high(size)
	{
		initialize_array();
	}
	myArray(T l,T h) : low(l),high(h)
	{
		initialize_array();
	}
	void initialize_array()
	{
		if((high-low)<=0)
		exit_app("****BAD ARRAY SIZE VALUES GIVEN,(low_index - high_index) has to be positive");
		arr = new T[high-low];
	}
	void set_value_array(T index,T value)
	{
		check_index_out_of_bound(index);
		arr[index-low] = value;
	}
	T  get_value_array(T index)
	{
		check_index_out_of_bound(index);    
		return arr[index-low];
	}
	void print_array()
	{
		T size=high-low;
		print("***********Array Details");
		cout<<"low :"<<low<<" high :"<<high<<" size :"<<size<<endl;
		cout<<"Array contents is :"<<endl;
  		T temp_low=low;
  		for(T i=0;i<size;i++,temp_low++)
			cout<<"arr["<<temp_low<<"] :"<<arr[i]<<endl;
	}
	void print_valueat(T index)
	{
  		check_index_out_of_bound(index);
  		cout<<"Value at index"<<index<<" ie.  array["<<index<<"] :"<<arr[index-low];
	}
	~myArray()
	{
  		delete[] arr;
	}
};
int main()
{
 	cout<<endl<<"myArray tutorial \n";
 		//  myArray<int> a;
 	myArray<int> a1(5);
 	myArray<int> a2(-4,7);
 		//  a1.print_array();
 		//a2.print_array();
 		//  myArray<int> a3(-4,-8);
  	a2.set_value_array(2,5);
	a2.print_array();
	cout<<endl;
 	a2.set_value_array(-3,9);
 	a2.print_array();
 	cout<<"value at a1 [2] :"<<a1.get_value_array(2)<<endl;
 	cout<<a1.get_value_array(8);
 	cout<<endl<<"Everything is fine\n";
	return 0;
}
