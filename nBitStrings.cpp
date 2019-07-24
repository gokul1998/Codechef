#include<bits/stdc++.h>
using namespace std;
char a[3];
void binary(char a[],int n){
	if(n<1){
		printf("%s",a);
			}
			else{
	a[n-1]=0;
	binary(a,n-1);
	a[n-1]=1;
	binary(a,n-1);
}
}
int main(){
	int n;
	cin>>n;
	
	binary(a,n);
}
