/*
Queries on Strings

Submissions: 1553   Accuracy: 14.29%   Difficulty: Medium

Dynamic-Programming
    
Given a string you have to answer several queries on that string. In each query you will
be provided two values L and R and you have to find the number of distinct characters in
the sub string from index L to index R (inclusive) of the original string.
 

Input 
The first line of the input  contains T, the number of test cases. Then T test cases follow.
Each test case consists of 3 lines. The first line contains the string S. The second line
contains the value of Q, the number of queries. The next line contains 2*Q integers describing
the queries in the form L1 R1 L2 R2…..LQ RQ.
 

Output
For each test case output the answer of the queries in a single line separated by a space.
The answer of different test cases should appear on separate lines.
 

Constraints : 
1<=T<=10
?1<=|S|<=10000
1<=Q<=10000
1<=L<=R<=|S|

The string consists of only lower case English letters. (a-z)
 

Example 

Input
1
abcbaed
3
1 4 2 4 1 7

Output 
3 2 5

Explanation

Above there is only one test case having 3 queries
1. In the first query we see that in the interval (1,4) the distinct letters are a,b,c so answer
   is 3.
2. In the second query we see that in the interval (2,4) the distinct letters are b,c.
3. In the third query we see that in the interval (1,7) the distinct letters are a,b,c,d,e
   so answer is 5.
 
** For More Input/Output Examples Use 'Expected Output' option **
Author: Arnab Deb

*/

#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <bitset>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <stack>
#include <queue>


using namespace std;

// dp[i][j] denotes the cumulative occurance of the jth character //
// from index 1 to i of the string. //
int T=0,N=0,Q=0,L=0,R=0,ans=0,dp[10005][26];

string str="";


int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	
	while(cin>>T){
		
	    while(T--){
            
			N=0,Q=0,L=0,R=0,ans=0;
			str="";

			memset(dp,0,sizeof dp);
			
			cin >> str;
			N = str.size();
			
			for(int i=1;i<=N;++i){
				for(int j=0;j<26;++j){
					dp[i][j] = dp[i-1][j];
					++dp[i][(int)(str[i-1]-'a')];
				}
			}
		for(int i=0;i<=N;i++){
			for(int j=0;j<26;j++)cout<<dp[i][j]<<" ";
			cout<<endl;
		}	
			
			cin >> Q;
			
			
			for(int i=1;i<=Q;++i){
				ans = 0;
				//?? L ? R ? one-based ??//
				cin >> L >> R;
				for(int j=0;j<26;++j){						
					if(dp[R][j]-dp[L-1][j]>0){
						++ans;
					}
				}
				
			    cout << ans << " ";
			}
			
		    cout << endl;
		
		}
   }
    
	return 0;
}
