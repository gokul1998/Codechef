#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long int i=0,c=0;
		while(s[i]!='\0'){
			if(s[i]=='4' || s[i]=='7'){}
			else c++;
			i++;
		}
		cout<<c<<endl;
	}
}
