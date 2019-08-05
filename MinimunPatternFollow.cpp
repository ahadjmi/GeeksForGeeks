using namespace std;

void fun(string str)
{
    stack<int> s;
    
    for(int i=0;i<=str.length();i++){
        
        s.push(i+1);
        if(str.length()==i || str[i]=='I')
        {
            while(!s.empty())
            {
                cout<<s.top();
                s.pop();
            }
        }
    }
}
int main()
 {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        fun(str);
        cout<<endl;
    }
	return 0;
}