#include<bits/stdc++.h>
using namespace std;

int main()
{
int t, n;
cin>>t;
while(t--)
{
cin>>n;
double res = 0;
for (int k = 1; k <= n; k++)
res = res + n / (double)k;
cout <<fixed <<setprecision(2) << res<<endl;
}
return 0;
}
