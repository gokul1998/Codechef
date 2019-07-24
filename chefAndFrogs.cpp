#include<bits/stdc++.h>
using namespace std;
struct frog{
	long long id;
	long long dist;
};
bool myfun(frog &a,frog &b){
	return a.dist>b.dist;
}
void fill(long long res[],long long n,struct frog b[],long long i,long long j){
	long long k,val=b[j].id;
	for(k=i;k<=j;k++){
		res[b[k].id]=val;
	}
}
int main(){
	long long num,n,p,k,i,j;
	cin>>n>>k>>p;
	long long res[n]={0};
	struct frog a[n];
	for(i=0;i<n;i++){
		cin>>num;
		a[i].dist=num;
		a[i].id=i;
	}
	sort(a,a+n,myfun);
	for(i=0;i<n;i++){
		j=i+1;
		while(j<n && a[j].dist-a[j-1].dist<=k)j++;
		j--;
		if(j<n)fill(res,n,a,i,j);
	}
	for(i=0;i<n;i++)cout<<res[i]<<" ";
	
}
