#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long j,len=s.size(),i=0,ans=0;
		int c=0,h=0,e=0,f=0;
		for(i=0;i<=len-3;i++){
			if(s[i]=='c' || s[i]=='h' ||s[i]=='e' || s[i]=='f'){
					if(s[i]=='c')c=1;
					else if(s[i]=='h')h=1;
					else if(s[i]=='e')e=1;
					else if(s[i]=='f')f=1;
					for(j=i+1;j<=i+3;j++){
						if(s[j]=='c')c=1;
						else if(s[j]=='h')h=1;
						else if(s[j]=='e')e=1;
						else if(s[j]=='f')f=1;
					}
		}
		if(c==1 && h==1 && e==1 && f==1)ans++;
		c=0,h=0,e=0,f=0;
	}
	if(ans==0)cout<<"normal"<<endl;
	else cout<<"lovely "<<ans<<endl;
}
}
