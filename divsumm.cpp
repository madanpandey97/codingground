#include <iostream>
 #include<stdio.h>
  using namespace std;
   int main()
    {
     int t;
      cin>>t;
       while(t--) {
        int x;
        cin>>x;
          int j; 
          long long sum=0; 
          for(j=1;(j*j)<x;++j)
           if(x%j==0) 
           sum+=j+x/j;
            if(j*j==x)
            sum=sum+j;
             sum=sum-x; 
             cout<<sum<<endl;
             }
              return 0; 
} 
