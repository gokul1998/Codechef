#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,num,a[100005]={0},c=0;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>num;
			a[num]++;
		}
		for(i=0;i<100005;i++){
			if(a[i]!=0)c++;
		}
		cout<<c<<endl;
	}
}
