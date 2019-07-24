#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int a[n];
		long int sum=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		int fail=0,full=0;
		for(i=0;i<n;i++){
			if(a[i]==2){
				fail=1;
				break;
			}
			if(a[i]==5)full=1;
		}
		double avg=(double)sum/n;
		//cout<<"avg = "<<avg<<endl;
		if(fail==0 && full==1 && avg>=4.0)cout<<"Yes\n";
		else cout<<"No\n";
	}
}
