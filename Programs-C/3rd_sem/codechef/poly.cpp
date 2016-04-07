			
#include<iostream>
#include<math.h>
using namespace std;
class abc
{
	public:abc()
	{
		cout<<"Invalid degree\n";
	}
};
class poly
{
	int j,p[20],c[20];
	public:
		void setvalue(int a)
		{
			j=a;
			for(int i=0;i<=j;i++)
			{
				cout<<"Enter the coefficient of x^:"<<a<<endl;
				cin>>c[i];
				p[i]=a--;
			}
		}
		void compute(int x)
		{
			int a;
			int sum=0;
			for(int i=0;i<=j;i++)
			{
				a=pow(x,p[i]);
				a=c[i]*a;
				sum+=a;
			}
			cout<<sum<<endl;
		}
		void reduce()
		{
			for(int i=0;i<j;i++)
			{
				for(int k=i+1;k<=j;k++)
				{
					if(p[i]==p[k])
					{
						c[i]=c[i]+c[k];
						c[k]=-1;p[k]=-1;
					}
				}
			}
		}
		void operator =(poly &s)
		{
			j=s.j;
			for(int i=0;i<=j;i++)
			{
				c[i]=s.c[i];
				p[i]=s.p[i];
			}
		}
		void operator +(poly &s)
		{
			int a=0,b=0,d=0;
			poly temp;
			int i=((j>=s.j)?j:s.j);
			for(;i>=0;i--)
			{
				if(p[a]>s.p[b])
				{ 	temp.c[d]=c[a];
					temp.p[d]=p[a];
					a++;d++;
					continue;
				}
				else if(p[a]<s.p[b])
				{ 	temp.c[d]=s.c[b];
					temp.p[d]=s.p[b];
					b++;d++;
					continue;
				}
				else//if(p[a]==s.p[b])
				{
					temp.c[d]=c[a]+s.c[b];
					temp.p[d]=p[a];
					d++;a++;b++;
				}
			}
			temp.j=--d;
			cout<<temp;
			//temp.display();
			//return temp;
		}
		
		void operator *(poly &s)
		{
			poly temp;
			int d=0;
			for(int a=0;a<=j;a++)
			{
				for(int b=0;b<=s.j;b++)
				{
					temp.c[d]=c[a]*s.c[b];
					temp.p[d]=p[a]+s.p[b];
					d++;
				}
			}
			temp.j=d-1;
			temp.reduce();
			cout<<temp;
			//temp0.display();

			//return temp;
		}
		friend istream& operator >>(istream& i,poly &s)
		{
			int n;
			cout<<"Enter the highest degree of the polynomial"<<endl;
			cin>>n;
			s.setvalue(n);
		}
		void display()
		{
			for(int a=0;a<=j;a++)
			{
				if(p[a]>=0)
				{
					cout<<c[a]<<"x^"<<p[a];
					if(a!=j)
					cout<<" + ";
				}
			}
			//cout<<" = 0"<<endl;
		}
	    friend iostream& operator << (ostream& o,poly &s)
		{
			//cout<<"The polynomial is:\n";
			s.display();
			cout<<endl;
		}
		
};
int main()
{
	poly a,b,c,d;
	int n,x;
	try
	{
	 cout<<"Enter the degree of the polynomial\n";
	 cin>>x;
	 if(x<0)
	 throw abc();
   	a.setvalue(x);
 	b=a;
 	cout<<endl;
	a.display();
	cout<<"\nEnter the value of x:\n";
	cin>>n;
	a.compute(n);
	b.setvalue(2);
	cout<<endl;
	b.display();
	cout<<"\n\nPolynomial after multiplication:\n\n";
	a*b;
	//c.display();
	cout<<"\n\nPolynomial after addition:\n\n";
	a+b;
	}
    catch(abc)
    {
    }
	//d.display();
	//system("Pause");
	return 0;
}
