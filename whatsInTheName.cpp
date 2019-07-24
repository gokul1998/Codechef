#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char s[100];
		cout<<"hell"<<endl;
		gets(s);
		int flag=0,j=0,i=0,spaces=0,len=0;
		cout<<s<<endl;
		while(s[i]!='\0')len++;
		cout<<len<<endl;
		for(i=0;i<len;i++){
			if(s[i]==' ')spaces++;
		}
		cout<<spaces<<endl;
		if(spaces==0){
			if(s[0]>='A' && s[0]<='Z')cout<<s[0];
			else cout<<s[0]-32;
			i=1;
			while(s[i]!='\0'){
				if(s[i]>='a' && s[i]<='z')cout<<s[i];
				else cout<<s[i]+32;
				i++;
			}
			flag=1;
		}
		if(flag==0 && spaces==1){
				if(s[0]>='A' && s[0]<='Z')cout<<s[0]<<"."<<" ";
			    else cout<<s[0]-32<<"."<<" ";
			    i=1;
			    while(s[i]!=' ')i++;
			    i++;
			    if(s[i]>='A' && s[i]<='Z')cout<<s[i];
			    else cout<<s[i]-32;
			    i++;
			    while(s[i]!='\0'){
			    		if(s[i]>='a' && s[i]<='z')cout<<s[i];
				        else cout<<s[i]+32;
				i++;
				}
				flag=1;
		}
		if(flag==0 && spaces==2){
			if(s[0]>='A' && s[0]<='Z')cout<<s[0]<<"."<<" ";
			else cout<<s[0]-32<<"."<<" ";
			    i=1;
			    while(s[i]!=' ')i++;
			    i++;
			     if(s[i]>='A' && s[i]<='Z')cout<<s[i]<<". ";
			     else cout<<s[i]-32;
			     while(s[i]!=' ')i++;
			     i++;
			     if(s[i]>='A' && s[i]<='Z')cout<<s[i];
			     else cout<<s[i]-32;
			     i++;
			     while(s[i]!='\0'){
			     	if(s[i]>='a' && s[i]<='z')cout<<s[i];
				    else cout<<s[i]+32;
				i++;
				 }
		}
		cout<<endl;
	}
}
