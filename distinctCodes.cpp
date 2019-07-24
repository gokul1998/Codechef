#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		set<string>s;
		cin>>a;
		int len=a.size(),i;
		for(i=0;i<len-1;i++){
			char b[2];
			b[0]=a[i];
			b[1]=a[i+1];
			s.insert(b);
			//cout<<b<<"   hh"<<endl;
		}
		cout<<s.size()<<endl;
	}
}
