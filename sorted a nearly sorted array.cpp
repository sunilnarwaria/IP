#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define fr(i,s,e) for(i=s;i<e;i++)
#define rf(i,s,e) for(i=s-1;i>=e;i--)
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
//
typedef vector<long long> vll;
typedef vector<pair<long long,long long> > vpll;
typedef vector<vector<ll> > vvll;

#define PI 3.141592653589793
#define MOD 1000000007
const int N=1e5+1;

  void sorted(int a[],int k,int n)
  {
      int arr[101],idx(0);
      priority_queue < int, vector<int> , greater<int> > pq(a,a+k+1);

      for(int i=k+1;i<=n;i++)
      {
          arr[idx++] = pq.top();
          pq.pop();
          pq.push(a[i]);
      }
      while(!pq.empty())
      {
          arr[idx++]= pq.top();
          pq.pop();
      }
          for(int i=0;i<n;i++)
	     {
	         cout<<arr[i]<<" ";
	     }
	     cout<<endl;

    //  return arr;
  }
 int32_t main()
{
	 int n,t,k;
	 cin>>t;
	 while(t--)
	 {

	     cin>>n>>k;
	     int a[n+1];

	     for(int i=0;i<n;i++)
	     {
	         cin>>a[i];
	     }
         sorted(a,k,n);

	 }

	return 0;

}



