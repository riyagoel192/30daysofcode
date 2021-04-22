#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<cstring>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i,j;
    int c=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        char str[100000];
        char res_even[100000];
        char res_odd[100000];
        int k=0;
        int m=0;
        cin>>str;
        for(j=0;j<strlen(str);j++)
        {
            if((j%2)==0)
            {
                res_even[k++]=str[j];
            }
            else
            {
                res_odd[m++]=str[j];
            }
        }
        for(int h=0;h<k;h++)
        cout<<res_even[h];

        cout<<" ";

        for(int h=0;h<m;h++)
        cout<<res_odd[h];

        cout<<endl;
    }   
    return 0;
}

