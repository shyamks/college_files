#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
using namespace std;
class octalno
{
	private:
		int octal;
		int decimal;

	public:

		void getoct()
		{
			int r,s=0,temp;
			do
			{
				cout<<"\nEnter octal no:";
				cin>>octal;
				temp=octal;
				r=temp%10;
				if(r>7)
				{
					cout<<"the no is not vaild octal no. try again\n";
					s=1;
				}
				else
					s=0;
			}while(s==1);
		}
		void getdec()
		{
			cout<<"\nEnter decimal no:";
			cin>>decimal;
		}

		void dec_to_oct();

		int oct_to_dec();
};

class hexano
{
	private:

		int deci;
		char hexa[50];

	public:

		void getdec()
		{
			cout<<"\nEnter decimal no to b converted to hexadecimal:";
			cin>>deci;
		}
		void gethex()
		{
			char temphexa[50];
			int i,len,s=0;
			do
			{
				cout<<"\nEnter hexa decimal no: "<<endl;
				cin>>hexa;
				strcpy(temphexa,hexa);
				len=strlen(temphexa);
				for(i=len-1;i>=0;i--)
				{
					if ((hexa[i]>='0'&&hexa[i]<='9')||((hexa[i]>='A'&&hexa[i]<='F')||(hexa[i]>='a'&&hexa[i]<='f')))
					{
						s=0;
					}
					else
					{
						cout<<"Entered no is not hexadecimal\n";
						s=1;
						break;
					}
				}
			}while(s==1);
		}
		void dec_to_hex();

		int hex_to_dec();

		friend void add(octalno,hexano);
};

void octalno::dec_to_oct()
{
	int c=0,r,t=1,sum=0;
	int temp=decimal;
	while(temp>0)
	{
		r=temp%8;
		sum=(r*t)+sum;
		t=t*10;
		temp=temp/8;
	}
	cout<<sum;
}

int octalno::oct_to_dec()
{
	int r,count=0;
	long dec=0,temp;
	temp=octal;
	while(temp>0)
	{
		r=temp%10;
		dec=dec+(r*pow(8,count));
		temp=temp/10;
		count++;
	}
	return dec;
}
void hexano::dec_to_hex()
{
	int count=0,r,i,m[10];
	long hd,temp;
	temp=deci;
	while(temp>0)
	{
		m[count]=temp%16;
		temp=temp/16;
		count++;
	}
	cout<<"The hexadecimal equivalent of given decimal no "<<deci<<" is : ";
	for(i=count-1;i>=0;i--)
	{
		if(m[i]>9)
		{
			printf("%c",m[i]+55);
		}
		else
			cout<<m[i];
	}
	cout<<endl;
}

int hexano::hex_to_dec()
{
	int i,j,num,len,count=0;
	int sum=0;
	len=strlen(hexa);
	for(i=len-1;i>=0;i--)
	{
		if(hexa[i]>='0'&&hexa[i]<='9')
		{num=hexa[i]-48;}
		else if(hexa[i]=='A'||hexa[i]=='a')
		{num=10;}
		else if(hexa[i]=='B'||hexa[i]=='b')
		{num=11;}
		else if(hexa[i]=='C'||hexa[i]=='c')
		{num=12;}
		else if(hexa[i]=='D'||hexa[i]=='d')
		{num=13;}
		else if(hexa[i]=='E'||hexa[i]=='e')
		{num=14;}
		else if(hexa[i]=='F'||hexa[i]=='f')
		{num=15;}
		sum=sum+(num*pow(16,count));
		count++;
	}
	return sum;
}

void add(octalno o,hexano h)
{
	int a,b,sum,o1;
	char h1[50];
	o.getoct();
	h.gethex();
	a=o.oct_to_dec();
	b=h.hex_to_dec();
	sum=a+b;
	cout<<"The sum of two nos is :"<<sum;
}

int main()
{
	octalno obj1;
	hexano obj2;
	int ch,p;
	cout<<"1 for decimal to octal\n2 for octal to decimal\n3 for decimal to hexadecimal\n4 for hexadecimal to decimal\n5 for addition\n6 for exit";
	while(1)
	{	
		cout<<"\nEnter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1: obj1.getdec();
			obj1.dec_to_oct();
			break;
			case 2: obj1.getoct();
			p=obj1.oct_to_dec();
			cout<<p;
			break;
			case 3: obj2.getdec();
			obj2.dec_to_hex();
			break;
			case 4: obj2.gethex();
			p=obj2.hex_to_dec();
			cout<<p;
			break;
			case 5: add(obj1,obj2);
			break;
			default: cout<<"Exiting\n";
			return 0;
		}
	}
}
