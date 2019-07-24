#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin>>n>>k;
	long long sum=k,a[200001]={0};
	int i,index=1;
	for(i=1;i<=k;i++)a[i]=1;
	for(i=k+1;i<=n;i++){
		a[i]=sum;
		//a[i]%=1000000007;
		sum=((2*sum)%1000000007-(a[index])%1000000007)%1000000007;
	    index++;
	}
	//for(i=1;i<=n;i++)cout<<a[i]<<" ";
	cout<<a[n];
}
