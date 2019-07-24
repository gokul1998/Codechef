#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a=0,b=0;
		int i,len=s.size();
		for(i=0;i<len;i++){
			if(s[i]=='a')a++;
			else b++;
		}
		cout<<min(a,b)<<endl;
	}
}
