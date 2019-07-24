#include<bits/stdc++.h>
using namespace std;
void cover(int arr[],int a1,int b){
	int i;
	for(i=a1;i<=b;i++)arr[i]=1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,x,y,left=0,right=0;
		cin>>m>>x>>y;
		int a[m+1],i,safe[101]={0},dist=x*y,count=0;
		for(i=1;i<=m;i++)cin>>a[i];
		for(i=1;i<=m;i++){
			if(a[i]-dist<=1)left=1;
			else left=a[i]-dist;
			if(a[i]+dist>=100)right=100;
			else right=a[i]+dist;
			//cout<<"i = "<<i<<"  left = "<<left<<"  right = "<<right<<endl;
			cover(safe,left,right);
		}
		for(i=1;i<=100;i++){
			if(safe[i]==0)count++;
		}
		cout<<count<<endl;
	}
}
