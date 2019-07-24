#include<bits/stdc++.h>
using namespace std;
int main(){
		int n,c=0,i=0,curr=0,first=0;
		cin>>n;
		int a[100],b[100]={0},res[100][100];
		memset(res,0,sizeof(res));
		for(i=1;i<=n;i++)cin>>a[i];
		res[0][0]=1,b[1]=0;
		i=1;
		int x=0,y=1,j;
		cout<<"array"<<endl;
		for(i=1;i<=n;i++)cout<<a[i]<<" ";
		cout<<endl;
		i=1,first=1,curr=a[1];
		while(c!=n){
			
			//first=a[i];
			//if(c==0)first=1;
			cout<<"first = "<<first<<endl;
			while(curr!=first){
				//curr=a[i];
				cout<<"i = "<<i<<" cirr= "<<curr<<endl;
				b[curr]=1;
				c++;
				res[x][y]=curr;
				y++;
				i=a[i];
				curr=a[i];
			}
			x++,y=0;
			for(j=1;j<=n;j++){
				if(b[j]==0){
					first=j;
					curr=a[first];
				}
			}
		}
		for(i=0;i<x;i++){
			for(j=0;res[i][j]!=0;j++)cout<<res[i][j]<<" ";
			cout<<endl;
		}
	}

