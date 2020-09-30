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
int arra[sz];

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

 tree[ind] = tree[2*ind]+tree[(2*ind)+1];
}

int query (int ind, int lb,int ub, int qlb , int qub)
{
  if(qub < lb || qlb > ub) return -1;
  if(qlb<=lb &ub <= qub) return tree[ind];
    int mid = (ub+lb)/2;
    int ret=0;
  ret += query((2*ind),lb, mid , qlb,qub);
  ret += query((2*ind)+1,mid+1,ub,qlb,qub);
  return ret;
  }
int main()
{
   int k,q,x,y,z,s;
  int n, p,t;
  scanf("%d",&t);
  for(int g=0;g<t;g++)
  {
  scanf("%d%d",&n,&k);
  for(int i=0;i<n;i++)
  {
scanf("%d",&arra[i]);
    update(1,0,n-1,i,arra[i]);
  }
  printf("Case %d:\n",g+1);
  for(int j=0;j<k;j++)
  {
   scanf("%d",&x);
   if(x==1)
   {
     scanf("%d",&y);
     printf("%d\n",arra[y]);

   }
   else if(x==2)
   {
     scanf("%d%d",&y,&z);
     arra[y]=arra[y]+z;
     update(1,0,n-1,y,arra[y]);
   }
   else
   {
     scanf("%d%d",&y,&z);
cout<<query(1,0,n-1,y,z)<<"\n";
   }
  }
  }
return 0;
}

