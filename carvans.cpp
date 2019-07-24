#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i,curr,c=0;
		cin>>n;
		long long a[n],b[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		for(i=0;i<n;){
			curr=a[i];
			//i++;
			while(i<n && curr<=a[i]){
				a[i]=curr;
				i++;
			}
		}
		for(i=0;i<n;i++){
			if(a[i]==b[i])c++;
		}
		/*for(i=0;i<n;i++)cout<<a[i]<<" ";
		cout<<endl;*/
		cout<<c<<endl;
	}
}
