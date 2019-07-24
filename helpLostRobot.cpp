#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x1,y1,x2,y2,flag=0;
		cin>>x1>>y1>>x2>>y2;
		int xd=x2-x1,yd=y2-y1;
		if(x1!=x2 && y1!=y2)flag=1;
		if(xd>=1 && yd==0){
			cout<<"right"<<endl;
		}
		else if(xd<0 && yd==0)cout<<"left"<<endl;
		else if(yd>=1 && xd==0)cout<<"up"<<endl;
		else if(yd<0 && xd==0)cout<<"down"<<endl;
		if(flag)cout<<"sad"<<endl;
	}
}
