#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int i,len=a.size(),flag=0;
		for(i=0;i<len;i++){
			if(a[i]=='?' || b[i]=='?'){
			}
			else if(a[i]!=b[i]){
				//cout<<"a[i] = "<<a[i]<<endl;
				flag=1;
				break;
			}
		}
		if(flag)cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}
