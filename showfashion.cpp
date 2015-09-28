#include<iostream>
#include<algorithm>
using namespace std;
int main() 
{
	         int t;
	         cin>>t;
	         while(t--)
	         {
	         	int n;
	         	cin>>n;
	         	int ar1[n],ar2[n];
	         	long long int i,j,k;
	         	for(i=0;i<n;i++)
	         	{
	             	cin>>ar1[i];
	         	}
	 	         	for(j=0;j<n;j++)
	 	         	{
	 	         	cin>>ar2[j];
	 	         	}
	         		
	         		sort(ar1,ar1+n);
	         		sort(ar2,ar2+n);
	         		long long  sum=0;
	         	for(k=0;k<n;k++)
	  	        {
	  	        	sum +=ar1[k]*ar2[k];
	  	        }
	         		
	         	cout<<sum<<endl;
	         }
return 0;

}
