#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		long int pos,i,a[n];
		for(i=0;i<n;i++)cin>>a[i];
		int zero=0,flag=0;
		for(i=0;i<n;i++){
			if(flag==0 && a[i]==0){
				pos=i;
				flag=1;
			}
			if(a[i]==0)zero++;
		}
		if(flag==1)cout<<((zero*1000)+(n-pos)*100)<<endl;
		else cout<<"0"<<endl;
	}
}
