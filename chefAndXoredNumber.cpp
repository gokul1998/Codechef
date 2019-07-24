#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long s;
		cin>>s;
		long long ind=0,flag=0,i=0,ans=1,two=1;
		while(two<=s){
			if(i==0){
				two=1;
				i=1;
			}
			else two=two*2;
			if(two-1==s){
				flag=1;
				break;
			}
			//cout<<two<<endl;
		}
		if(s==1)cout<<"2"<<endl;
		else if(flag==0)cout<<"-1"<<endl;
		else cout<<s/2<<endl;
	}
}
