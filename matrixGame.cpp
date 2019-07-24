#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,i,j,flag=0;
		cin>>n>>m;
		int len=n*m;
		int a[len];
		long long x=0,y=0;
		for(i=0;i<len;i++)cin>>a[i];
		sort(a,a+len);
		for(i=len-1;i>=0;i--){
			if(flag==0){
				x+=a[i];
				flag=1;
			}
			else{
				y+=a[i];
				flag=0;
			}
		}
		if(x<y)cout<<"Geno"<<endl;
		else if(x>y)cout<<"Cyborg"<<endl;
		else cout<<"Draw"<<endl;
	}
}
