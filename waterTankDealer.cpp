#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,total=0;
	cin>>n;
	int c[n],w[n],curr;
	for(i=0;i<n;i++)cin>>c[i];
	for(i=0;i<n;i++){
	cin>>w[i];
	total+=w[i];}
	sort(c,c+n);
	sort(w,w+n);
	i=n-1,j=0;
	while(1){
		curr=c[i];
		c[i]=-1;
		while(curr!=0){
			if(j<n && w[j]<=curr){
				curr-=w[j];
				j++;
			}
			else if(j<n){
				w[j]-=curr;
				curr=0;
			}
			else curr=0;
		//	cout<<"hii"<<endl;
		}
		//cout<<"hello"<<endl;
		i--;
		if(j==n)break;
	}
	i=n-1;
	int c1=0;
	while(i>=0 && c[i]==-1){
	c1++;i--;}
	cout<<c1<<endl;
}
