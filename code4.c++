#include "bits/stdc++.h"

using namespace std;
int main()
{
  
  string str;
  cin>>str;
  //str+='1';
  string temp="s";
  for(int i=0;i<str.length();i++)
  {
    if(str[i]=='h' &&  temp[temp.length()-1]=='s')
     {
       temp+='h';
       continue;
     }
    if(str[i]=='e' && temp[temp.length()-1]=='h')
    {temp+='e';
     continue;
    }
    if(str[i]=='l' && temp[temp.length()-1]=='e')
     {temp+='l';
     continue;
     }
    if(str[i]=='l' && temp[temp.length()-1]=='l' && temp[temp.length()-2]=='e')
     {temp+='l';
     continue;}
    if(str[i]=='o' && temp[temp.length()-1]=='l' && temp[temp.length()-2]=='l')
     {temp+='o';
     continue;}
  }
  if(temp=="shello")
   cout<<"YES\n";
  else
  cout<<"NO\n";
   

  return 0;
}

     