#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n,d;
	cin>>n>>d;
	int a[n],i,j,k,count=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		
	}

	
	for(i=0;i<n-2;i++){
		for(j=i+1;j<n-1;j++){
			if(a[j]-a[i]==d){
		    	for(k=j+1;k<n;k++){
			          if(a[k]-a[j]==d){
			          	count++;
			          }
			}
		}
	
	}
	}
	
	cout<<count<<endl;
	return 0;
}
