#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int v[100];
		long long int i=0,x,len=0;
		char temp; 
    do{
        scanf("%d%c", &x, &temp);
		v[i]=x;
		i++; 
        len++; 
        
        } while(temp!= '\n');
        int flag=0;
        long long int n=len-1,maxi=-1;
        for(i=0;i<len;i++){
        	if(flag==0 && v[i]==n)flag=1;
        	else maxi=max(maxi,v[i]);
		}
		cout<<maxi<<endl;
	}
}
