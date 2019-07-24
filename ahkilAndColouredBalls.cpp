#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string x,y;
		cin>>x>>y;
		int i,len=x.size();
		for(i=0;i<len;i++){
			if(x[i]==y[i] && x[i]=='B')cout<<"W";
			else if(x[i]==y[i] && x[i]=='W')cout<<"B";
			else cout<<"B";
		}
		cout<<endl;
	}
}
