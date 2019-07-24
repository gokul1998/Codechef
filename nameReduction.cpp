#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b,c,cat;
		cin>>a>>b;
		int flag=0,parent[26]={0},alen=a.size(),blen=b.size();
		long long n,i,len=0;
		cin>>n;
		while(n--){
			cin>>c;
			cat+=c;
		}
		len=cat.size();
		for(i=0;i<alen;i++){
			parent[a[i]-'a']++;
		}
		for(i=0;i<blen;i++){
			parent[b[i]-'a']++;
		}
		for(i=0;i<len;i++){
			if(parent[cat[i]-'a']==0){
				flag=1;
				break;
			}
			else parent[cat[i]-'a']--;
		}
		if(flag==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
