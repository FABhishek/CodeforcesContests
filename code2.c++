#include "bits/stdc++.h"
using namespace std;
int main()
{
  
  int n;
  cin>>n;
  vector<int>arr;
  int sum=0;
  int input;
  for(int i=0;i<n;i++)
  {  
     cin>>input;
     arr.push_back(input);
     sum+=arr[i];
   }
   sort(arr.begin(),arr.end(),greater<int>());
   int j=0;
   int flag=1;
   for(int i=0;i<n;i++)
      {
          j+=arr[i];
          if(sum/2<j)
          {
            cout<<i+1;
            flag=0;
            break;
            
          }
     }
     if(flag==1)
      cout<<n;   
  return 0;
}
