//-2^32+1<=a<=b<=2^32-1
//the number of ones in the binary representation of the numbers from a to b where a <0 and b>0 case only
#include <iostream>
#include <cstring>
#include <stdint.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int64_t calc(int nu){
	long long int a,b,temp,count=0,i,t,num,temp1,c,h;
	
    	int64_t icb,ica;
    	count=0;ica=0;icb=0;c=0;h=0;
	if(nu<0){
		a=nu;
		temp1=abs(a)-1;//real code
	    	while(temp1!=0){
			temp=temp1;num=0;
		    while(temp!=0){
		    	temp>>=1;
		    	num++;
		    }
		    temp=temp1;
		    ica+=(1<<(num-2))*(num-1);
		    ica+=temp-(1<<(num-1))+1;
		    temp1-=1<<(num-1);
		}
		temp1=abs(a)-1;
		return -1*((32*(temp1+1))-(ica));
	}
	else{
		b=nu;
		temp1=b; 
	    while(temp1!=0){
		    temp=temp1;num=0;
		    while(temp!=0){
		    	temp>>=1;
		    	num++;
		    }
		    temp=temp1;
		    icb+=(1<<(num-2))*(num-1);
		    icb+=temp-(1<<(num-1))+1;
		    temp1-=1<<(num-1);
	    }
	    return icb;
	}
}

int main()
{
    long long int a,b,temp,count=0,i,t,num,temp1,c,h=0;
    int64_t icb,ica,finale;
    cin>>t;
    //temp=n;
    while(t--){
    	cin>>a>>b;count=0;ica=0;icb=0;c=0;h=0;
	    /*for(i=a;i>=0;i--){//comparing part(brute force answer)
	    	temp=i;count=0;
	    	while(temp!=0){
	    		temp=temp&(temp-1);
	    		count++;
	    	}
	    	c+=count;//c+=count-32 negative ge
	    }

	    for(i=0;i<=b;i++){
	    	temp=i;count=0;
	    	while(temp!=0){
	    		temp=temp&(temp-1);
	    		count++;
	    	}
	    	h+=count;
	    }//comparing part*/
	    
	    /*temp1=abs(a)-1;//real code
	    while(temp1!=0){
		    temp=temp1;num=0;
		    while(temp!=0){
		    	temp>>=1;
		    	num++;
		    }
		    temp=temp1;
		    ica+=(1<<(num-2))*(num-1);
		    ica+=temp-(1<<(num-1))+1;
		    temp1-=1<<(num-1);
	    }
	    temp1=abs(a)-1;
	    ica=(32*(temp1+1))-(ica);
	    temp1=b; 
	    while(temp1!=0){
		    temp=temp1;num=0;
		    while(temp!=0){
		    	temp>>=1;
		    	num++;
		    }
		    temp=temp1;
		    icb+=(1<<(num-2))*(num-1);
		    icb+=temp-(1<<(num-1))+1;
		    temp1-=1<<(num-1);
	    }//real code*/
	    ica=calc(a);
	    icb=calc(b);
	    if((ica<0 && icb <0)||(ica>0 && icb >0)){
	    	finale=abs(ica-icb);
	    	//cout<<abs(ica-icb)<<endl;
	    }
	    else {//if((ica>0 && icb<0 )|| (ica<0 && icb>0)){
	    	finale=abs(ica)+abs(icb);
	    }
	    
	    cout<<finale<<endl;
	    //cout<<finale<<" "<<h-c<<endl;
	    
    }
    return 0;
}

