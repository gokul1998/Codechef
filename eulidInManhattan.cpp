#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct point{
	ll x,y;
};
int main(){
	ll n,i,j,res=0,a,b;
	cin>>n;
	point points[n];
	for(i=0;i<n;i++){
		cin>>a>>b;
		points[i].x=a;
		points[i].y=b;
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if((points[i].x==points[j].x)||(points[i].y==points[j].y))res++;
		}
	}
	cout<<res<<endl;
}
