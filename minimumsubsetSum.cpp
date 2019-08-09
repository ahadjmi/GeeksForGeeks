#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n],sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum += arr[i];
	    }
	    
	    int T[n+1][sum+1];
	    
	    for(int i=0;i<=n;i++)
	        T[i][0]=1;
	    for(int i=1;i<=sum;i++)
	        T[0][i]=0;
	        
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=sum;j++)
	        {
	            if(j>=arr[i-1])
	                T[i][j] = T[i-1][j]||T[i-1][j-arr[i-1]];
	            else
	                T[i][j] = T[i-1][j];
	        }
	    }
	    
	    int minm = INT_MAX;
	    for(int i=0;i<=sum;i++)
	    {
	        if(T[n][i]==1 && 2*i<=sum)
	        {
	            minm = min(minm,sum-2*i);
	        }
	    }
	    
	    cout<<minm<<endl;
	}
	
	return 0;
}