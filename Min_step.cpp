#include<bits/stdc++.h>
using namespace std;

int fun(int source,int step,int dest)
{
    
    if(abs(source) > dest)
    {
        return INT_MAX;
    }
    
    if(source==dest)
    {
        return step;
    }
    
    int l = fun(source+step+1,step+1,dest);
    int r = fun(source-step-1,step+1,dest);
    
    return min(l,r);
}
int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int step=fun(0,0,n);
	    
	    cout<<step<<endl;
	}
	return 0;
}