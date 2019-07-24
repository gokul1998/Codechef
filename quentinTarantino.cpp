#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		long int maxi=-1,sum1=0,sum2=0,i,a[n];
		for(i=0;i<n;i++){
		cin>>a[i];
		sum1+=a[i];
		maxi=max(maxi,a[i]);
	}
	sum2=maxi*(maxi+1)/2;
	if(sum1!=sum2){
		cout<<"no"<<endl;
		continue;
	}
		int flag=0;
		for(i=0;i<n;i++){
			if((i+1<n && (a[i]>a[i+1]))||(i-1>=0 && (a[i-1]>a[i])))flag=1;
		}
		if(flag==1)cout<<"yes"<<endl;
		else cout<<"no"<<endl;		
}
}
