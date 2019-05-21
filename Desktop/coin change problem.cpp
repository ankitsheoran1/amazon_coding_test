

//code for number of ways given coin n can make
#include<bits/stdc++.h>
using namespace std;
int coin(int a[],int i,int j,int dp[301][301])
{
    if(j==0)
    return 1;
    else if(j<0)
    return 0;
    else if(i==0&&j>0)
    return 0;
    else if(dp[i][j]==0)
    {
        dp[i][j]=coin(a,i,j-a[i-1],dp)+coin(a,i-1,j,dp);
        return dp[i][j];
    }
    else
    return dp[i][j];
}
int main() {
	
	    int n,i,j,k,l,m;
	    cin>>n>>m;
	    int a[m];
	    for(i=0;i<m;i++)
	    cin>>a[i];
	   // cin>>m;
	    int dp[301][301];
	    for(i=0;i<301;i++)
	    for(j=0;j<301;j++)
	    dp[i][j]=0;
	    coin(a,m,n,dp);
	    cout<<dp[m][n];
	   // cout<<endl;
	    
	
	return 0;
}
