#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	string a,b;
	cin>>a;
	int len=a.size(),arr[26]={0},flag=0;
	for(i=0;i<len;i++)arr[a[i]-'a']=1;
	cin>>n;
	while(n--){
		cin>>b;
		int l=b.size();
		for(i=0;i<l;i++){
			if(arr[b[i]-'a']==0){
				flag=1;
				break;
			}
		}
		if(flag)cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
		flag=0;
	}
}
