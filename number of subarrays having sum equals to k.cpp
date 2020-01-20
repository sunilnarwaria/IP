#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int a[N];

 int subarr(int a[],int n,int sum)
 {
     unordered_map<int , int > prevsum;
     int currentsum=0;
     int ans(0);
     for(int i=0;i<n;i++)
     {
         currentsum+=a[i];

         if(currentsum == sum)
         {
             ans++;
         }

         if(prevsum.find(currentsum-sum) != prevsum.end())

             ans += prevsum[currentsum-sum];

             prevsum[currentsum]++;

     }
          cout<<ans<<endl;
 }

 int main()
 {
     int n,sum;
     cin>>sum;
     cin>>n;

     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     subarr(a,n,sum);
  return 0;
 }
