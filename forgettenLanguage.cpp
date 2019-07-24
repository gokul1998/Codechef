#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,j,l,i;
		cin>>n>>k;
		string str[100];
		set<string>s;
		string st;
		for(i=0;i<n;i++)cin>>str[i];
		for(i=0;i<k;i++){
			cin>>l;
			for(j=0;j<l;j++){
				cin>>st;
				s.insert(st);
			}
		}
		//unordered_map<string,int>::iterator p;
/*		for(p=a.begin();p!=a.end();p++){
			cout<<p->first<<" ";
			//else cout<<"NO"<<" ";
		}
		cout<<endl<<"stop"<<endl;*/
		set<string>::iterator p;
		for(i=0;i<n;i++){
			p=s.find(str[i]);
			if(p!=s.end())cout<<"YES"<<" ";
			else cout<<"NO"<<" ";
			//cout<<"m = "<<p->first<<endl;
		}
		cout<<endl;
	}
}
