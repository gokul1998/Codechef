#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,v1,v2;
		cin>>n>>v1>>v2;
		double t1,t2,ed,sd;
		ed=(double)n*2;
		sd=(double)n*1.414;
		t1=(double)ed/v2;
		t2=(double)sd/v1;
		if(t1<t2)cout<<"Elevator"<<endl;
		else cout<<"Stairs"<<endl;
	}
}
