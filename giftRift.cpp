#include<bits/stdc++.h>
using namespace std;
int main(){
		int r,c,i,j;
		cin>>r>>c;
		long long mini,maxi,a[r][c],result=-1;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++)cin>>a[i][j];
		}
		map<long long,long long>m;
		for(i=0;i<r;i++){
			mini=INT_MAX;
			for(j=0;j<c;j++)mini=min(mini,a[i][j]);
			m[mini]=mini;
			//cout<<"row min = "<<mini<<endl;
		}
		for(i=0;i<c;i++){
			maxi=INT_MIN;
			for(j=0;j<r;j++)maxi=max(maxi,a[j][i]);
			//cout<<"col max = "<<maxi<<endl;
			if(m.find(maxi)!=m.end()){
				result=maxi;
				break;
			}
		}
		if(result!=-1)cout<<result<<endl;
		else cout<<"GUESS"<<endl;
}
