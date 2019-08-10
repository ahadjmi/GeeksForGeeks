#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     
     while(t--)
     {
         int n;
         cin>>n;
         
         int mat[n][n];
         
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n;j++)
             {
                 cin>>mat[i][j];
                 
             }
         }
         
         int dp[n][n];
         
         for(int i=0;i<n;i++)
         {
             dp[0][i]=mat[0][i];
         }
         
         for(int i=1;i<n;i++)
         {
             for(int j=0;j<n;j++)
             {
                 if(j==0)
                 {
                    dp[i][j]= max(dp[i-1][j],dp[i-1][j+1])+mat[i][j]; 
                 }
                 else if(j==n-1)
                 {
                    dp[i][j]= max(dp[i-1][j-1],dp[i-1][j])+mat[i][j];
                 }
                 else
                 {
                     dp[i][j]= max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]))+mat[i][j];
                 }
               
             }
         }
         
         int result=0;
         
         for(int i=0;i<n;i++)
         {
             result=max(dp[n-1][i],result);
         }
         
         cout<<result<<endl;
     }
     
	return 0;
}