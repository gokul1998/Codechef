#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		string s;
		long long i,n,curr=0,start=-1,len=0,day=0;
		cin>>s;
		n=s.size();
		for(i=0;i<n;i++){
			if(s[i]=='.'){
				len=0;
				while(i<n && s[i]=='.'){
					len++;
					i++;
				}
				if(len>curr){
					curr=len;
					day++;
				}
			}
		}
		cout<<day<<endl;
	}
}
