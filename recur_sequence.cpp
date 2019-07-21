#include<iostream>
using namespace std;
int fun(int n)
{
    if(n==1)
    {
        return 1;
    }
    
    for(int i=2;i<=n;i++)
    {
        int t=fun(n-1)
    }
}
int main()
 {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int c=fun(n);
	}
	return 0;
}