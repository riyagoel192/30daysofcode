#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,r;
    int a[100]={0};
    int max=0;
    int count=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0)
    {
        if(n%2 == 1)
            count++;
        else
            count=0;
        if(max<count)
        max=count;

        n/=2;
    }
    cout<<max;
    return 0;
}

