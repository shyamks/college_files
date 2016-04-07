/*
Consider 'a'->1,'b'->2,'c'->3 and so on 'z'->26.. Given a sequence of numbers convert it into all words that are possible.

ex:- Input - 1221
	 Output - 1 2 2 1 , 12 2 1 , 1 22 1 , 1 2 21 , 12 21

*/
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;
void perms(int a[],int start,int doubles,int size,vector<int> disp){
	if(start>=size){
		vector <int>::iterator j;
		for (j = disp.begin(); j != disp.end(); ++j){
			cout<<(*j)<<" ";
		}
		cout<<endl;
		return;
	}
	disp.push_back(a[start]);
	perms(a,start+1,doubles,size,disp);
	disp.pop_back();
	if ((start < size - 1 ) && (doubles > 0)){
		if (a[start]<3 && a[start+1]<7){
			int c = a[start] * 10 ;
			int d = a[start+1]  ;
			disp.push_back(c + d);
			perms(a,start+2,doubles-1,size,disp);
			disp.pop_back();
		}
	}
	
}
int main(){
	vector<int> disp;
	cout<<"Enter a sequence\n";
	string str;
	cin>>str;
	int num[str.size()];
	for( int i = 0; i < str.size(); i++ ){
		num[i] = str[i] - '0';
	}
	int size = (sizeof(num)/sizeof(num[0]));
	perms(num,0,size/2,size,disp);
	return 0;
}