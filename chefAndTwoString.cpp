#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int i,len=a.size();
		int mini=0,maxi=0;
		for(i=0;i<len;i++){
			if(a[i]!=b[i]){
				if(a[i]=='?' || b[i]=='?'){
				}
				else mini++;
			}
			if(a[i]!=b[i] || a[i]=='?' || b[i]=='?')maxi++;
		}
		cout<<mini<<" "<<maxi<<endl;
	}
}
