#include<iostream>
using namespace std;
char A[100];

void binary(int n)
{
	if(n<1)
	{
		cout<<A<<endl;
	}
	else
	{
		A[n-1]='0';
     	binary(n-1);
    	A[n-1]='1';
    	binary(n-1);
 	}

}
int main()
{
	int n;
	cin>>n;
	
	binary(n);
	
	return 0;
}
