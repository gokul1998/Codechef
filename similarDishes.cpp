#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		map<string,int>m;
		int i,c=0;
		for(i=0;i<4;i++){
			string s;
			cin>>s;
			m[s]=1;
		}
		for(i=0;i<4;i++){
			string s1;
			cin>>s1;
			if(m[s1]==1)c++;
		}
		if(c>=2)cout<<"similar"<<endl;
		else cout<<"dissimilar"<<endl;
	}
}
