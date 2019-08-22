#include<bits/stdc++.h>
using namespace std;

string fun(string str)
{
    map<int,vector<string> > m;
    string s="";
    int count=0;
    int i=0;
    
    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='.')
        {
            m[count].push_back(s);
            count=0;
            s="";
        }
        else
        {
            if(i==0)
            {
                char x=str[0]+32;
                s=s+x;
                
                count++;
            }
            else
            {
                 s=s+str[i];
                 count++;
            }
          
        }
        i++;
    }
    
    string result="";
    
    for(auto j:m)
    {
        for(auto k:j.second)
        {
            result=result+k+' ';
          
        }
    }
    int n=result.length();
    
    result[n-1]='.';
    if(result[0] >='a' && result[0] <='z')
    {
        char y=result[0]-32;
        result[0]=y;
    }
    
    return result;
}

int main()
{
	string str;
	getline(cin,str);
	
	string s=fun(str);
	cout<<s<<endl;
	return 0;
}