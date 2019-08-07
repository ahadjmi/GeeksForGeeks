#include<iostream>
using namespace std;

int fun(int arr[],int m,int n)
{
    int dp[m+1][n+1];
    
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 && j==0)
            {
                dp[i][j]=1;
            }
            else if(i==0)
            {
                dp[0][j]=0;
            }
            else if(j==0)
            {
                dp[i][0]=1;
            }
            
            else
            {
                if(arr[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j]+dp[i][j-arr[i-1]];
                }
            }
        }
    }
    
    return dp[m][n];
}

int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int m,n;
	    cin>>m;
	    
	    int arr[m];
	    
	    for(int i=0;i<m;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    cin>>n;
	    
	    int c=fun(arr,m,n);
	    cout<<c<<endl;
	}
	return 0;
}