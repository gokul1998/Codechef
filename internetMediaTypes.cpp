#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	char a[100],b[100];
	map<char*,char*>m;
	while(n--){
		cin>>a>>b;
		m[a]=b;
		cout<<"sfs  "<<m[a]<<endl;
	}
	while(q--){
		cin>>a;
		int ind=0,len=strlen(a),lastdot=-1,i=0;
		for(i=0;i<len;i++){
			if(a[i]=='.')lastdot=i;
		}
		char ext[50];
		if(lastdot!=-1){
			for(i=lastdot+1;i<len;i++)ext[ind++]=a[i];
		}
		/*cout<<"jfef = "<<ext<<endl;
		if(lastdot==-1 || m.find(ext)==m.end())cout<<"unknown"<<endl;
		else cout<<m[ext]<<endl;*/
		map<char*,char*>::iterator p;
		for(p=m.begin();p!=m.end();p++)cout<<m[p->first]<<endl;
	}
}
