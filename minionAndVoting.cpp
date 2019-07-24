#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i,j,sum=0;
		cin>>n;
		ll a[n],b[n];
		for(i=0;i<n;i++){
		 cin>>a[i];
		 if(i==0 || i==n-1)b[i]=1;
		 else b[i]=2;
	}
	for(i=0;i<n;i++){
		sum=a[i+1];
		j=i+2;
		while(j<n){
			if(sum<=a[j])b[i]++;
			sum+=a[j];
			j++;
		}
		sum=0;
		if(i-1>=0)sum=a[i-1];
		j=i-2;
		while(j>=0){
			if(sum<=a[j])b[i]++;
			sum+=a[j];
			j--;
		}
		sum=0;
	}
	for(i=0;i<n;i++)cout<<b[i]<<" ";
	cout<<endl;
	}
}
