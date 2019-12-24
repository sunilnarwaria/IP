#include<bits/stdc++.h>
using namespace std;
  int binarynumber(int n)
  {
      queue <string> q;
      q.push("1");
      while(n--)
      {

          string s1=q.front();
          q.pop();
          cout<<s1<<endl;
          string s2=s1;
          q.push(s1.append("0"));
          q.push(s2.append("1"));
      }
  }
int main()
{

   // int arr[100];
    int n;
    cin>>n;

    binarynumber(n);
    return 0;
}
