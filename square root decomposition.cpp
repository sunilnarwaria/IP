#include<bits/stdc++.h>
using namespace std;
int block[100];
int blk_sz;
int a[22],b[22];
    int n;
void update(int idx, int val)
{
    int blknumber = idx/blk_sz;
    block[blknumber] += val - b[idx];
    b[idx] = val;
}

int query(int l, int r)
{
   int sum=0;
   while(l<r && l%blk_sz!=0 )
   {
       sum+=b[l];
       l++;
   }
   while(l+blk_sz <=r)
   {
       sum+=block[l/blk_sz];
       l += blk_sz;
   }
   while(l<=r)
   {
       sum+=b[l];
       l++;
   }
   return sum;
}
void preprocess(int a[],int n)
{
    int blk_idx =-1;
    blk_sz = sqrt(n);

    for(int i=0;i<n;i++)
    {
        b[i] = a[i];

            if(i % blk_sz == 0)
            {
                blk_idx++;
            }
            block[blk_idx] += b[i];

    }
}


int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    preprocess(a,n);

     cout << "query(3,8) : " << query(3, 8) << endl;
    cout << "query(1,6) : " << query(1, 6) << endl;
    update(8, 0);
    cout << "query(8,8) : " << query(8, 8) << endl;
    return 0;
}
