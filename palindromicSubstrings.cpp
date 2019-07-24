#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int i,len1=a.size(),len2=b.size();
		int hash[26]={0},flag=0;
		for(i=0;i<len1;i++)hash[a[i]-'a']=1;
		for(i=0;i<len2;i++){
			if(hash[b[i]-'a']==1){
				flag=1;
				break;
			}
		}
		if(flag)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
