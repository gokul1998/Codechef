#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n,k,num=2;
		cin>>n>>k;
		if(k==1)cout<<"1"<<endl;
		else if(k>n/2)cout<<"-1"<<endl;
		else{
			for(int i=0;i<k;i++){
				cout<<num<<" ";
				num<<=1;
			}
			cout<<endl;
		}
	}
}
