#include <bits/stdc++.h>
using namespace std;
 
#define EPS (1e-9)
#define pb push_back
#define mp make_pair
#define pi (acos(-1.0))
#define endl "\n"
#define all(v) v.begin(),v.end()
#define printa(a,L,R) for(int i=L;i<R;i++) cout<<a[i]<<(i==R-1?'\n':' ')
#define precise(n) cout << fixed << setprecision(n)
#define show(a) cout << (#a) << " is " << (a) << endl;
#define pcase cout<<"Case "<<++cs<<": "
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long int ll;
typedef unsigned long long int ull;
const int mod=1e9+7;
ll gcd(ll a,ll b){while(b){ll x=a%b;a=b;b=x;}return a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
ull binpow(ll base, ll exp){ll res = 1;while(1){ if(exp&1) res*=base;exp>>=1;if(!exp)break;base*=base;}return res;}
 
#define sz 1000000
 
int tree[4*sz];
 
void update(int ind , int lb, int ub ,int pos,int val)
{
  if(pos<lb && pos>ub)
    return ;
  if(ub==lb)
  {
    if(ub==pos)
    {
      tree[ind]=val;
      return ;
 
    }
  }
int  mid=(ub+lb)/2;
  if(pos<=mid) update(2*ind , lb , mid, pos, val);
  else update((2*ind)+1,mid+1,ub, pos, val);
 
 tree[ind] = min(tree[(2*ind)],tree[(2*ind + 1)]);
}
 
int query (int ind, int lb,int ub, int qlb , int qub)
{
  if(qub < lb || qlb > ub) return -1;
  if(qlb<=lb &ub <= qub) return tree[ind];
    int mid = (ub+lb)/2;
    int ret1, ret2;
  ret1= query((2*ind),lb, mid , qlb,qub);
  ret2 = query((2*ind)+1,mid+1,ub,qlb,qub);
  if(ret1==-1)
    return ret2;
  else if(ret2==-1)
    return ret1;
  else
  return min(ret1, ret2);
  }
int main()
{
   int k,q,x,y,z,s;
  int n, p,t;
  scanf("%d",&t);
  for(int g=0;g<t;g++)
  {
  scanf("%d%d",&n,&k);
  for(int i=1;i<=n;i++)
  {
scanf("%d",&s);
    update(1,1,n,i,s);
  }
  printf("Case %d:\n",g+1);
  for(int j=0;j<k;j++)
  {
   scanf("%d%d",&y,&z);
  printf("%d\n",query(1,1,n,y,z));
  }
  }
return 0;
}
 
