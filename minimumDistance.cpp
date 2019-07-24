#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int ds,dt,d,x1,x2;
		cin>>ds>>dt>>d;
		double res=0.0;
		if(ds+dt<d){
			x1=ds,x2=d-dt;
			res=(double)sqrt(pow((x1-x2),2));
		}
		cout<<fixed<<setprecision(10)<<res<<endl;
	}
}
