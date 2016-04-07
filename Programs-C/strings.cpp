#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <stdint.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,count;
    uint64_t a,b,temp,ans,hello,tem,i;
    ifstream infile("A");
    infile>>t;
    while(t--){
        infile>>a>>b;
        
        temp=a;
        ans=a;
        count=0;
        //cout<<<<endl;
        while(temp!=0){ 
            if(temp&1){
                if(count>=31){
                    tem=(1<<30);
                    for(i=31;i<=count;i++){
                        tem*=2;
                        //cout<<tem<<endl;
                    }
                    if(((tem)+a)<=b){
                        ans=ans&((tem)+a);
                        count++;
                        temp=a;
                        for(i=count;i>0;i--){
                            temp/=2;
                        }
                        //temp>>=count;

                    }
                    else
                        break;  
                }
                else{
                    if(((1<<count)+a)<=b){
                        ans=ans&((1<<count)+a);
                        count++;
                        temp=a;
                        temp>>=count;

                    }
                    else
                        break;   
                }
            }
            else{
                count++;
                temp=ans;
                temp>>=count;
            }
            /*hello=ans;
            while(!hello){
                cout<<(hello%2);
                hello/=2;
            }*/
            
        }
        cout<<ans<<endl;
    }
    return 0;
}

