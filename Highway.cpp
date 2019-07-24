#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		float s,sg,fg,d,t,i,fd,sd;
		cin>>s>>sg>>fg>>d>>t;
		float distance,diff;
		distance=((float)d*50*3600)/((float)t*1000);
		diff=s+distance;
		fd=fg-diff;
		sd=sg-diff;
		if(fd<0)fd=-fd;
		if(sd<0)sd=-sd;
		//cout<<diff<<" "<<fd<<" "<<sd<<endl;
		if(fd<sd)cout<<"FATHER"<<endl;
		else if(fd>sd)cout<<"SEBI"<<endl;
		else cout<<"DRAW"<<endl;
	}
}
