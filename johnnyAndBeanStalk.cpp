#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long level,i,curr=1;
		cin>>level;
		long long a[level];
		for(i=0;i<level;i++)cin>>a[i];
		for(i=0;i<level-1;i++){
			if(curr<0)break;
			curr=curr-a[i];
			curr=curr*2;
		}
		if(a[level-1]==curr && curr>=0)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
