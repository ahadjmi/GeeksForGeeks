#include<bits/stdc++.h>
using namespace std;

int histo(int arr[],int n)
{
    stack<int> s;
    long long int max =INT_MIN;
    
    int i=0;
    
    for(i=0;i<n;)
    {
        if(s.empty() || arr[i] > arr[s.top()])
        {
            
            s.push(i);
            i++;
        }
        else
        {
            int top = s.top();
            s.pop();
            if(!s.empty() && max < arr[top]*(i-1-s.top()))
            {
                 max = arr[top]*(i-1-s.top());
            }
         
            else if(s.empty())
            {
                if(max < arr[top]*i)
                   max = arr[top]*i;
                   
        
            }
           
        }
    }
    
    while(!s.empty())
    {
        int top = s.top();
            s.pop();
            if(!s.empty() && max < arr[top]*(i-1-s.top()))
            {
                 max = arr[top]*(i-1-s.top());
            }
         
            else if(s.empty())
            {
                if(max < arr[top]*i)
                   max = arr[top]*i;
                   
        
            }
    }
    
    return max;
    
}
int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    int max=histo(arr,n);
	    cout<<max<<endl;
	}
	return 0;
}
