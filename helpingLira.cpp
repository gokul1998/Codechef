#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int ax,ay,bx,by,cx,cy;
	
	long long maxi=-1,mini=-1,area=0,ind1=0,ind2=0;
	for(i=1;i<=n;i++){
	cin>>ax>>ay>>bx>>by>>cx>>cy;
		area=abs(ax*abs(by-cy)+bx*abs(ay-cy)+cx*abs(ay-by));
		if(maxi<=area){
			maxi=area;
			ind1=i;
		}
		if(mini==-1 || mini>=area){
			mini=area;
			ind2=i;
		}
	}
	cout<<ind2<<" "<<ind1<<endl;
}
