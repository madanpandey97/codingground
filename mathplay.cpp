#include<iostream>
#include<math.h>
using namespace std;
long long int gcd(long long int u,long long int v)
{
	if(v==0)
		return u;
	else
		return gcd(v,u%v);
}


int main()
{
	long long int t,a,b,k;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a==b)
			cout<<"1 1\n";
		else
		{
		   k=gcd(a,b);
		
		cout<<b/k<<" "<<a/k<<endl;
     	}
	}
	return 0;
}
