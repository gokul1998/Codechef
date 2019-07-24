#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int i,len;
		long long r=1;
		cin>>s;
		len=s.size();
		for(i=0;i<len;i++){
			if(i%2==0){
				if(s[i]=='l')r=(r*2)%MOD;
				else r=((r*2)+2)%MOD;
			//	cout<<"if   ";
			}
			else{
				if(s[i]=='l')r=(2*r-1)%MOD;
				else r=(2*r+1)%MOD;
			//	cout<<"else   ";
			}
			//cout<<r<<"   t"<<endl;
		}
		cout<<r<<endl;
	}
}
