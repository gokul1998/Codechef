#include<bits/stdc++.h>
using namespace std;
int digi(int n){
	int c=0;
	while(n!=0){
		n/=10;
		c++;
	}
	return c;
}
int main(){
	int a,b,res;
	cin>>a>>b;
	res=a-b;
	int rem,i,n=digi(res);
	int arr[n]={0};
	for(i=n-1;i>=0;i--){
		rem=res%10;
		arr[i]=rem;
		res/=10;
	}
	//for(i=0;i<n;i++)cout<<arr[i]<<" ";
	if(arr[0]==9)arr[0]=1;
	else arr[0]+=1;
	//cout<<endl;
	for(i=0;i<n;i++)cout<<arr[i];
}
