#include<bits/stdc++.h>
using namespace std;
int main(){
	long long num,n,q,i,j,x,r,c;
	cin>>n>>q;
	long long row[n+1]={0},col[n+1]={0};
	string s;
	while(q--){
		r=-1,c=-1;
		cin>>s;
		cin>>num>>x;
		if(s[0]=='R')row[num]+=x;
		else col[num]+=x;
	}
	long long rmax=-1,cmax=-1;
	for(i=1;i<n;i++){
	rmax=max(rmax,row[i]);
	cmax=max(cmax,col[i]);
}
cout<<rmax+cmax<<endl;
}
