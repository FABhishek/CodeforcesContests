#include <bits/stdc++.h> 
using namespace std;

int main()
{
   int n; cin>>n;
	vector<int> v;
	int num;
	int a1=0,a2=0;
	for(int i=0;i<n-1;i++)
	{
		cin>>num;
		v.push_back(num);
		a2^=num;
	}
    
    for(int i=1;i<=n;i++)
        a1^=i;

    cout<<(a1^a2);
	return 0;
}
