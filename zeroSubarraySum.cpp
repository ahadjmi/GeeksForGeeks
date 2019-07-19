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
	    unordered_map<int,int> m;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        
	    }
	    
	    int sum=0;
	    int count =0;
	    m[0]++;
	    
	    for(int i=0;i<n;i++)
	    {
	        sum += arr[i];
	        
	        if(m.find(sum)!=m.end())
	        {
	            count+=m[sum];
	        }
	        
	        m[sum]++;
	        
	    }
	    
	    cout<<count<<endl;
	    
	}   
	
	return 0;
}