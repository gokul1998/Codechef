#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	getchar();
	while(t--){
		string s;
		getline(cin,s);
		int len=s.size(),i;
		int a[256]={0},flag=0;
		for(i=0;i<len;i++){
			if(s[i]>='a' && s[i]<='z'){
				a[s[i]]=1;
				a[s[i]-32]=1;
				//cout<<s[i]-32<<endl;
				//cout<<"if "<<(char)s[i]<<" "<<(char)(s[i]-32)<<endl;
			}
			else if(s[i]>='A' && s[i]<='Z'){
				a[s[i]]=1;
				a[s[i]+32]=1;
				//cout<<"else "<<(char)s[i]<<" "<<(char)(s[i]+32)<<endl;
			}
			else a[s[i]]=1;
		}
		int c=97;
		for(;c<=122;c++){
			if(a[c]==0){
				flag=1;
				cout<<(char)c;
				break;
			}
		}
		if(flag==0){
			c=65;
			for(;c<=90;c++){
				if(a[c]==0){
				flag=1;
				cout<<(char)c;
				break;
			}
		}
	}
		if(flag==0)cout<<'~';
		cout<<endl;
	}
}
