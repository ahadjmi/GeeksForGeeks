#include<bits/stdc++.h>
using namespace std;

class car
{
	long int x;
	long int y;
	long int v;
	
	public:
		void input(long int x1,long int y1,long int v1)
		{
			x=x1;
			y=y1;
			v=v1;
		}
		
		double calculate()
		{
			double time = sqrt(x*x + y*y)/v;
			
			return time;
		}
};

int main()
{
	int n;
	cin>>n;
	double t[n];
	
	car c[n];
	
	for(int i=0;i<n;i++)
	{
	    long int x,y,v;
		cin>>x>>y>>v;
		c[i].input(x,y,v);
			
	}
	
	for(int i=0;i<n;i++)
	{
		double time=c[i].calculate();
		
		t[i]=time;
	}
	
	sort(t,t+n);
	long int count=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(t[i]==t[j])
			{
				count++;
			}
			else
			{
				break;
			}
		}
	}
	
	cout<<count;
	
	return 0;
}
