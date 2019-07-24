#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int a[n],b[100001]={0};
		for(i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		for(i=1;i<=100000;i++){
			if(b[i]&1){
				//flag=1;
				break;
			}
		}
		cout<<i<<endl;
	}
}
