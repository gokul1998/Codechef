#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		char odd;
		long long len=s.size(),i,j;
		int k=0,rind=0,freq=0,b[26]={0},count=0,ind=0,res[len]={0};
		for(i=0;i<len;i++){
			b[s[i]-'a']++;
		}
		for(i=0;i<26;i++){
			if(b[i]&1){
				count++;
				odd=(char)i+'a';
				//cout<<"odd char = "<<odd<<endl;
			
			}
		}
		if(count==1){
			for(k=0;k<len;k++){
						if(s[k]==odd)break;
					}
					res[len/2]=k+1;
					b[s[k]-'a']--;
					s[k]='*';
				//		cout<<" odd s = "<<s<<"  k = "<<k<<endl;
		}
		if(count<=1){
			for(i=0;i<len;i++){
				if(s[i]!='*'){
				char c=s[i];
				freq=b[s[i]-'a'];
				//cout<<" s[i] = "<<s[i]<<"  freq = "<<freq<<endl;
				/*if(freq&1){
					for(k=0;k<len;k++){
						if(s[k]==odd)break;
					}
					res[len/2]=k+1;
					freq--;
					s[k]='*';
					cout<<" odd s = "<<s<<"  k = "<<k<<endl;
				}*/
				if(freq%2==0){
					while(freq!=0){
						if(s[i]!='*'){
					s[i]='*';
				//	cout<<"i change s = "<<s<<endl;
					for(j=i+1;j<len && s[j]!=c;j++);
					s[j]='*';
				//	cout<<"j change s = "<<s<<endl;
					res[rind]=i+1,res[len-rind-1]=j+1;
					freq-=2;
					rind++;
				}
				else i++;
			}
			}
			}
		}
		}
		if(count>1)cout<<"-1"<<endl;
		else{
			for(i=0;i<len;i++)cout<<res[i]<<" ";
			cout<<endl;
		}
}
}
