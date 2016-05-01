#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int num;
	cin>>num;
	int arr[num],i,j=0,count=0;
	for(i=0;i<num;i++){
		cin>>arr[i];
	}
	while(j<num-1){
		if(arr[j+1]==0 && arr[j+2]==0){
			j=j+2;
			count++;
		}
		else if(arr[j+1]==1 && arr[j+2]==0){
			j=j+2;
			count++;
		}
		else if(arr[j+1]==0 && arr[j+2]==1){
			j=j+1;
			count++;
		}
		else{
			j=j+1;
			count++;
		}
	}
	
	cout<<count<<endl;
	return 0;
}
