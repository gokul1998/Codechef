#include<bits/stdc++.h>
using namespace std;
int main(){
	long long i,n,t;
	cin>>t;
	while(t--){
		map<string,long long>m;
		cin>>n;
		string s;
		for(i=0;i<n;i++){
			cin>>s;
			m[s]++;
		}
		if(m["cakewalk"]>=1 && m["simple"]>=1 && m["easy"]>=1 && (m["easy-medium"]>=1 || m["medium"]>=1) &&(m["medium-hard"]>=1 || m["hard"]>=1))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		/*map<string,int>::iterator p;
		for(p=m.begin();p!=m.end();p++)cout<<p->first<<" "<<p->second<<endl;*/
	}
}
