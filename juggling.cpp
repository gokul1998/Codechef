#include<bits/stdc++.h>
using namespace std;
int findgcd(int a,int b){
	if(b==0)return a;
	else return findgcd(b,a%b);
}
int main(){
	int n,d,i,j,k;
	cin>>n>>d;
	int a[n],gcd=findgcd(n,d);
	for(i=0;i<n;i++)cin>>a[i];
	for(i=0;i<gcd;i++){
		int temp=a[i];
		j=i;
		while(1){
			k=j+d;
			if(k>=n)k-=n;
			if(k==i)break;
			a[j]=a[k];
			j=k;
		}
		a[j]=temp;
	}
	for(i=0;i<n;i++)cout<<a[i]<<" ";
}
