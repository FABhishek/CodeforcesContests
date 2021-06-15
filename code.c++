#include "bits/stdc++.h"
using namespace std;
int main()
{
    string str1;
    cin>>str1;
    string temp;
    for(int i=0;i<str1.length();i++)
    { 
      if(str1[i]!='+')  
        temp+=str1[i];
    }
    
     sort(temp.begin(), temp.end());
    for(int i=0;i<temp.length()-1;i++)
    {
       cout<<temp[i]<<"+";
    }
    cout<<temp[temp.length()-1];
   
       
 return 0;
}