#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		char s[n];
		int r=0,g=0,b=0;
		for(i=0;i<n;i++){
			cin>>s[i];
			if(s[i]=='R')r++;
			else if(s[i]=='G')g++;
			else b++;
		}
		int maxi=max(r,g);
		maxi=max(maxi,b);
		cout<<n-maxi<<endl;
	}
}
