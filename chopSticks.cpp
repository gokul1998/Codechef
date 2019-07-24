#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,d,i;
	cin>>n>>d;
	long long a[n],pair=0;
	for(i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n;i++){
		if(i+1<n && a[i+1]-a[i]<=d){
			pair++;
			i++;
		}
	}
	cout<<pair<<endl;
}
