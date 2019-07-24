#include<bits/stdc++.h>
using namespace std;
int main(){
	long long num,n1,n2,n3,i,c=0;
	cin>>n1>>n2>>n3;
	long long a[10000001]={0};
	for(i=0;i<n1;i++){
		cin>>num;
		a[num]++;
	}
	for(i=0;i<n2;i++){
		cin>>num;
		a[num]++;
	}
	for(i=0;i<n3;i++){
		cin>>num;
		a[num]++;
	}
	for(i=0;i<=10000000;i++){
		if(a[i]>=2)c++;
	}
	cout<<c<<endl;
	for(i=0;i<=10000000;i++){
		if(a[i]>=2)cout<<i<<endl;
	}
}
