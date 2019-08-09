#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    
	    int mat[m][n];
	    
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>mat[i][j];
	        }
	    }
	    
	    int dp[m][n];
	    int maxi=0;
	    
	    for(int i=0;i<m;i++)
	    {
	        dp[i][0]=mat[i][0];
	    }
	    
	    for(int i=1;i<n;i++)
	    {
	        dp[0][i]=mat[0][i];
	    }
	    
	    for(int i=1;i<m;i++)
	    {
	        for(int j=1;j<n;j++)
	        {
	            if(mat[i][j]==0)
	            {
	                dp[i][j]=0;
	            }
	            else
	            {
	                dp[i][j]=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
	                maxi=max(dp[i][j],maxi);
	            }
	        }
	    }
	    
	}
	return 0;
}