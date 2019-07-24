#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		char a[n][m],i,j;
		long int collision=0,cols=0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
	/*	for(i=0;i<n;i++){
			for(j=0;j<m;j++)cout<<a[i][j]<<" ";
			cout<<endl;
		}*/
	for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(a[j][i]=='1')cols+=1;
			}
			collision=(collision)+((cols)*(cols-1)/2);
			cols=0;
		}
		cout<<collision<<endl;
	}
}
