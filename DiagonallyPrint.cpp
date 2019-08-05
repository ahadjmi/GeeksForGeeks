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
	    
	    for(int j=0;j<n;j++)
	    {
	        for(int i=0;i<=j;i++)
	        {
	            cout<<mat[i][j-i]<<" ";
	        }
	    }
	    
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<n-i;j++)
	        {
	            cout<<mat[i+j][n-j-1]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}