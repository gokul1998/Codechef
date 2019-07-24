#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	long long n,i;
	cin>>n;
	long long a[n],b[100005]={0},c=0;
	for(i=0;i<n;i++){
	cin>>a[i];
	b[a[i]]=1;
}
	for(i=1;i<=100000;i++){
		if(b[i]==1)c++;
	}
	cout<<c<<endl;
}
}
