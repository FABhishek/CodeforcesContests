#include "bits/stdc++.h"
using namespace std;

#define mod 1000000007 

long int exponentiation(long int base, long int exp)
{
	long long t = 1;
	while(exp>0)
	{
		if(exp%2)
			t=(t*base)%mod;
		base = (base*base)%mod;

		exp/=2;
	}
	return t%mod;
}

int main()
{
	long int base = 2;
	long int exp;
	cin>>exp;
	long int modulo = exponentiation(base, exp);
	cout << modulo << endl;
	return 0;
}

