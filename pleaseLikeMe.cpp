#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long l,d,c,s,i;
		cin>>l>>d>>s>>c;
		for(i=2;i<=d;i++){
			s=s+(c*s);
			if(s>=l)break;
		}
		if(s>=l)cout<<"ALIVE AND KICKING"<<endl;
		else cout<<"DEAD AND ROTTING"<<endl;
	}
}
