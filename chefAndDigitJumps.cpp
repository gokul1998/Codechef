#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	char curr;
	int maxi=-1,len=s.size(),i=0,j=len-1,count=0,jump[10000]={0};
	for(i=0;i<len;i++){
		jump[s[i]-'0']=i;
		maxi=max(maxi,s[i]-'0');
	}
	for(i=0;i<len;i++)cout<<jump[i]<<" ";
	cout<<endl;
	i=0;
	while(i!=len-1){
		//curr=s[j];
		//j--;
		while(j>=0 && j!=i && s[j]!=s[i])j--;
	
		if(s[j]==s[i] && j!=i){
			cout<<"i = "<<i<<" j = "<<j<<" dup"<<endl;
			if(i+1<maxi && (jump[s[i]-'0']<=jump[s[i+1]-'0']) || (jump[s[i]-'0']<=jump[s[i-1]-'0'])){
				cout<<jump[s[i]-'0']<<"   "<<jump[s[i+1]-'0']<<"   hai"<<endl;
				if(jump[s[i]-'0']<=jump[s[i+1]-'0'])i=i+1;
				else i=i-1;
				cout<<"no jmp"<<endl;
			}
			else{
				i=j;
				cout<<"jump"<<endl;
			}
			
		}
			else if(j==i){
			cout<<"i = "<<i<<" j = "<<j<<"   no dup"<<endl;
			i++;
		}
		else{
			cout<<"ehlo"<<endl;
			i++;
		}
		
		count++;
		j=len-1;
	}
	cout<<count;
}
