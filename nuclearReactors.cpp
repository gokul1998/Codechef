#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,n,k,i,req=0;
	cin>>a>>n>>k;
	long long int arr[k]={0};
	while(a!=0){
		req=n+1-arr[0];
		if(req<=a){
			arr[0]=req;
			a-=req;
		}
		else{
			arr[0]+=a;
			a=0;
		}
		for(i=0;i<k;i++){
			if(arr[i]>=n+1){
				arr[i]=0;
				if(i+1<k)arr[i+1]+=1;
			}
			else break;
		}
	}
	for(i=0;i<k;i++)cout<<arr[i]<<" ";
}
