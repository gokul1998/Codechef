#include<bits/stdc++.h>
using namespace std;
long long arr[100002];
void fun(){
	long i,j;
	memset(arr,0,sizeof(arr));
	for(i=2;i<=100000;i++){
		if(arr[i]==0){
			for(j=i;j<=100000;j+=i)arr[j]++;
		}
	}
}
int main(){
	long t;
	cin>>t;
	fun();
	while(t--){
		long long factors,a,b,k,i,j,count=0;
		cin>>a>>b>>k;
		for(i=a;i<=b;i++){
			if(arr[i]==k)count++;	
		}
		cout<<count<<endl;
	}
}
