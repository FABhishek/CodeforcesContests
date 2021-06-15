#include "bits/stdc++.h"

using namespace std;
int main()
{
  
  string str;
  cin>>str;
  str+='1';
  string temp;
  for(int i=1;i<str.length();i++)
  {
    if(str[i-1]!=str[i])
      temp+=str[i-1]; 
    if(str[i-2]=='l'&&temp[temp.length()-1]=='l'&&temp[temp.length()-2]!='l')
      temp+='l';
    
    // if(str[i]=='l' && temp[temp.length()-1]=='l')
    //   temp+='l';
  }
  int pos = 0;
  int flag=1;
  int index;  
  while((index = temp.find("hello", pos)) != string::npos)
   { cout<<"YES\n";
     flag = 0;
     break;
   }
   if(flag==1)
    cout<<"NO\n";
  //cout<<temp;
  return 0;
}

   