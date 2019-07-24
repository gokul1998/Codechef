#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	bool flag;
	while(t--){
		int r,c,i,j,ind=0,k,l;
		cin>>r>>c;
		flag=false;
		char a[r][c];
		string s="spoon",s1="SPOON";
		for(i=0;i<r;i++){
			for(j=0;j<c;j++)cin>>a[i][j];
		}
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(a[i][j]=='s'|| a[i][j]=='S'){
 				if(j+4<c){
 					if(a[i][j+1]=='p' || a[i][j+1]=='P'){
 						if(a[i][j+2]=='o' || a[i][j+2]=='O'){
 							if(a[i][j+3]=='o' || a[i][j+3]=='O'){
 								if(a[i][j+4]=='n' || a[i][j+4]=='N'){
 									flag=true;
 									i=r+1;
 									break;
 								}
 							}
 						}
 					}
 				}
 				 	if(i+4<r){
 					if(a[i+1][j]=='p' || a[i+1][j]=='P'){
 						if(a[i+2][j]=='o' || a[i+2][j]=='O'){
 							if(a[i+3][j]=='o'|| a[i+3][j]=='O'){
 								if(a[i+4][j]=='n' || a[i+4][j]=='N'){
 									flag=true;
 									i=r+1;
 									break;
 								}
 							}
 						}
 					}
 				}
 			}
				}
			}
		if(flag)cout<<"There is a spoon!"<<endl;
		else cout<<"There is indeed no spoon!"<<endl;
	}
}

