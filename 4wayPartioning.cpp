#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)cin>>a[i];
	int low=0,mid1=0,mid2=n-1,high=n-1;
	while(mid1<=mid2){
		switch(a[mid1]){
			case 0:{
				swap(&a[low],&a[mid1]);
				low++,mid1++;
				break;
			}
			case 1:{
				mid1++;
				break;
			}
			case 2:{
				swap(&a[mid1],&a[mid2]);
				mid2--;
				break;
			}
			case 3:{
				swap(&a[high],&a[mid1]);
				if(high!=mid2)swap(&a[mid1],&a[mid2]);
				high--,mid2--;
				break;
			}
		}
	}
	for(i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<endl;
}
