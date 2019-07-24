#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long opt=1,flag=0,l,k,n,m,i,j,last=1,route=0,curr=0;
		cin>>n>>m;
		set<long long>a[m];
		for(k=0;k<m;k++){
			cin>>i>>j;
			if(k==0){
				a[0].insert(i);
				a[0].insert(j);
			}
			else{
				for(l=0;l<m;l++){
					if(a[l].find(i)!=a[l].end() || a[l].find(j)!=a[l].end()){
						flag=1;
						a[l].insert(i),a[l].insert(j);
						break;
					}
				}
				if(flag==0){
					a[last].insert(i);
					a[last].insert(j);
					last++;
				}
			}
		}
		set<long long>::iterator p;
		/*for(i=0;i<m;i++){
			for(p=a[i].begin();p!=a[i].end();p++)cout<<*p<<" ";
			cout<<endl;
		}*/
		for(i=0;i<m;i++){
			curr+=a[i].size();
			if(curr<=n && a[i].size()!=0)route++;
			else if(a[i].size()==0)route++;
			if(a[i].size()!=0)opt*=a[i].size();
		}
		if(m==0)cout<<n<<" "<<n<<endl;
		else cout<<route<<" "<<opt<<endl;
	}
}
