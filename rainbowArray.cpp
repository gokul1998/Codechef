#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)cin>>a[i];
		int flag=0,number=1,x=0,y=n-1,xcount=0,ycount=0;
		while(number<=6){
			//cout<<"hello"<<endl;
			if(a[x]!=number || a[y]!=number){
				flag=1;
				break;
			}
			while(a[x]==number && x<n){
				xcount++;
				x++;
			}
			while(a[y]==number && y>=0){
			ycount++;
			y--;
		}
			if(xcount!=ycount){
				flag=1;
				break;
			}
			number+=1;
			xcount=0;
			ycount=0;
		}
		if(flag==0 && number==7 && x<=y){
			for(i=x;i<=y;i++){
				if(a[i]!=7){
					flag=1;
					break;
				}
			}
		}
		else if(number!=7 || x>y)flag=1;
		if(flag==0)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}
