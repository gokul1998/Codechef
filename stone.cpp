#include<bits/stdc++.h>
using namespace std;
void print(long long a[],long long n){
	for(long long i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	long long n,k,i;
	cin>>n>>k;
	long long a[n],odd[n],even[n],maxi,maxi2;
	for(i=0;i<n;i++)cin>>a[i];
	maxi=a[0];
	for(i=1;i<n;i++)maxi=max(maxi,a[i]);
	for(i=0;i<n;i++){
		odd[i]=maxi-a[i];
		if(i==0)maxi2=odd[i];
		else{
			maxi2=max(maxi2,odd[i]);
		}
	}
	for(i=0;i<n;i++){
		even[i]=maxi2-odd[i];
	}
	if(k==0)print(a,n);
	else if(k&1)print(odd,n);
	else print(even,n);
}
