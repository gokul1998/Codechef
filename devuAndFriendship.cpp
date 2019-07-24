#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int a[n],b[101]={0};
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++){
			b[a[i]]=1;
		}
		int c=0;
		for(i=0;i<=100;i++){
			if(b[i]==1)c++;
		}
		cout<<c<<endl;
	}
}
