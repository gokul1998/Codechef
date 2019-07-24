#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,j,len,n,i,flag=0,ans=0,small;
	cin>>n;
	int a[n][26],ind=0;
	string s;
	char res[101];
	memset(a,0,sizeof(a));
	for(i=0;i<n;i++){
		cin>>s;
		len=s.size();
		for(j=0;j<len;j++)a[i][s[j]-'a']++;
	}
	for(i=0;i<26;i++){
		flag=0;
		small=a[0][i];
		for(j=1;j<n;j++){
			if(small>a[j][i])small=a[j][i];
		}
		for(k=0;k<small;k++){
			//cout<<"helf"<<endl;
		res[ind++]=97+i;
		ans=1;}
		
	}
	if(ans==0)cout<<"no such string";
	else{
		for(i=0;i<ind;i++)cout<<res[i];
	}
	cout<<endl;
	/*for(i=0;i<n;i++){
		for(j=0;j<26;j++)cout<<a[i][j]<<" ";
		cout<<endl;
	}*/
}
