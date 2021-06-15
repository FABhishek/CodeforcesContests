#include "bits/stdc++.h"
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str1;
        string str2;
        cin>>str1>>str2;
        int r=0,b=0;
        if(str1==str2)
        {
            cout<<"EQUAL"<<endl;
        }
        else{
        for(int i=0;i<n;i++)
        {
            if(int(str1[i])>int(str2[i]))
              r++;
            else if(int(str1[i])<int(str2[i]))
              b++;
        }
        if(r==b)
         cout<<"EQUAL"<<endl;
        if(r>b)
         cout<<"RED"<<endl;
        if(b>r)
         cout<<"BLUE"<<endl;
        }
    }
    return 0;
}