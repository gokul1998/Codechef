#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n,i,num;
		cin>>n;
		int one=0,minus=0,oth=0,zero=0;
		for(i=0;i<n;i++){
			cin>>num;
			if(num==0)zero++;
			else if(num==-1)minus++;
			else if(num==1)one++;
			else oth++;
		}
		if(oth>1)cout<<"no"<<endl;
		else{
			if(oth==1 && minus)cout<<"no"<<endl;
			else if(minus>1 && one==0)cout<<"no"<<endl;
			else cout<<"yes"<<endl; 
		}
	}
}
