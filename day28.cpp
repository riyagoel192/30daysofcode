#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    list<string>name;
    cin>>n;
    
    while(n>0)
    {
        string firstname;
        string emailid;
        cin>>firstname>>emailid;
        
        if(regex_match(emailid,regex(".+@gmail.com")))
        {
            name.push_back(firstname);
        }
        n--;
    }
    
    name.sort();
    
    while(!name.empty())
    {
        cout<<name.front()<<endl;
        name.pop_front();
    }
}

