#include "bits/stdc++.h"
using namespace std;
int main(){
  string s;
  cin>>s;
  int mx=1;
  int count=1;
  for(int i=0;i<s.length()-1;i++)
  { 
  	if(s[i]==s[i+1])
  	{
  		count++;
  	}
  	else count = 1;
  	mx = max(count, mx);
  }
  cout<<mx;
  return 0;
}



