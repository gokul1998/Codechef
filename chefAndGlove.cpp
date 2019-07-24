#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		ll a[n],b[n];
		int front=0,back=0,flag=0;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++)cin>>b[i];
		for(i=0;i<n;i++){
			if(a[i]>b[i]){
				flag=1;
				break;
			}
		}
		if(flag==0)front=1;
		flag=0;
		for(i=0;i<n;i++){
			if(a[i]>b[n-i-1]){
				flag=1;
				break;
			}
		}
		if(flag==0)back=1;
		if(front==1 && back==1)cout<<"both"<<endl;
		else if(front)cout<<"front"<<endl;
		else if(back)cout<<"back"<<endl;
		else cout<<"none"<<endl;
	}
}
