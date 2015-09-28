#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long int t,arr[3],i;

	while(1)
	{
		for(i=0;i<3;i++)
		{
		cin>>arr[i];
		}
		sort(arr,arr+3);
		if(arr[0]==0 && arr[1]==0 && arr[2]==0)
		break;
		else if(arr[2]==sqrt(arr[0]*arr[0]+arr[1]*arr[1]))
		cout<<"right"<<endl;
		else
		cout<<"wrong"<<endl;
	}
return 0;
}
