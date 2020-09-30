#include<iostream>
#define sz 100000
using namespace std;
int tree[sz];

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
  else update((2*ind+1),mid+1,ub, pos, val);

  tree[ind]=min(tree[(2*ind)],tree[(2*ind + 1)]);
}

int query (int ind, int lb,int ub, int qlb , int qub)
{
  if(qlb<=lb && ub <= qub) return tree[ind];
    if(qub < lb || qlb > ub) return -1;
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
   int k,q,x,y,z;
  int n, p,t;
  cin>>t;
  for(int g=0;g<t;g++)
  {
    cin>>n>>k;
  for(int i=0;i<n;i++)
  {
    cin>>p;
    update(1,0,n-1,i,p);
  }
cout<<"Case "<<g+1<<": "<<endl;
  for(int j=0;j<k;j++)
  {
    cin>>y>>z;
    cout<<query(1,0,n-1,y,z)<<endl;
  }

  }
return 0;
}
