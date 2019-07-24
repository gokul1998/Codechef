#include<bits/stdc++.h>
using namespace std;
int main(){
	int s;
	cin>>s;
	while(s--){
		int n,i;
		cin>>n;
		int a[n],flag=0;
		for(i=0;i<n;i++)cin>>a[i];
		if(n%2==0 || (a[0]!=1 && a[n-1]!=1)){
			flag=1;
		}
		int middle=n/2;
		if(flag==0){
		for(i=0;i<middle-1;i++){
			if(a[i+1]-a[i]!=1){
				flag=1;
				break;
			}
		}
		if(flag==0){
		for(i=middle;i<n-1;i++){
			if(a[i]-a[i+1]!=1){
				flag=1;
				break;
			}
		}
	}
	}
		if(flag==0)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}
