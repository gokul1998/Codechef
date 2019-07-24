#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,h,i,j,c=0,sum=0,start,rem=0,div=0;
		cin>>n>>h;
		ll a[n];
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		c=h-n;
		if(c>=0 && c<n)start=a[n-1-c];
		else start=a[0];
		//cout<<"start = "<<start<<endl;
		while(1){
			sum=0;
			for(i=0;i<n;i++){
				rem=a[i]%start;
				div=(a[i]-rem)/start;
				if(rem!=0)div++;
				//cout<<div<<endl;
				sum+=div;
			}
			if(sum==h)break;
			start++;
		}
		cout<<start<<endl;
	}
}
