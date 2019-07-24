#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		vector<string>s(n);
		for(i=0;i<n;i++)cin>>s[i];
		int flag=0,wrong=0;;
		for(i=0;i<n-1;i++){
			if(s[i]=="cookie" && s[i+1]=="cookie"){
				wrong=1;
				break;
			}
		}
		if(s[n-1]=="cookie")wrong=1;
		if(wrong==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
