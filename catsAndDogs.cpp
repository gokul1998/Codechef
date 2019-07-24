#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int c,d,l,lower=0,upper=0;
		cin>>c>>d>>l;
		lower=c+d-(l/4);
		if(lower>=0 && lower<=min(c,2*d) && l%4==0)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}
