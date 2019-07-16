#include<bits/stdc++.h>
using namespace std;
char A[1000];

void binary(int n,int k)
{
	if(n<1)
	{
		cout<<A<<endl;
	}
	else
	{
		
		for(int i=0;i<k;i++)
		{
			A[n-1]=48+i;
			binary(n-1,k);
		}
		
 	}

}
int main()
{
	int n,k;
	cin>>n;
	cin>>k;
	
	binary(n,k);
	
	return 0;
}
