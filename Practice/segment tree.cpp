#include <bits/stdc++.h>
using namespace std;
#define sz 100000
int tree[sz*4];
int arra[sz];
void update(int ind, int lb, int ub, int pos, int val)
{
    if(pos < lb || pos > ub) return;
    if(lb==ub){
        if(lb == pos) tree[ind] = val;
        return;
    }
    int mid = (lb+ub)/2;
    if(pos<=mid) update((ind*2),lb,mid,pos,val);
    else update((ind*2)+1,mid+1,ub,pos,val);
    tree[ind] = tree[(ind*2)] + tree[(ind*2)+1];
}

int query(int ind, int lb, int ub, int qlb, int qub)
{
    if(qlb<=lb && ub <= qub) return tree[ind];
    if(qub < lb || qlb > ub) return 0;
    int mid = (ub+lb)/2;
    int ret=0;
    ret += query(ind*2,lb, mid, qlb, qub);
    ret += query((ind*2)+1, mid+1, ub, qlb, qub);
    return ret;
}
int main()
{
    int n, q, x, y, k,t;
scanf("%d",&t);
for(int g=0;g<t;g++)
{
  scanf("%d%d",&n,&q);
    k = n;
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&arra[i]);
        update(1,0,n-1,i,arra[i]);
    }
    printf("Case %d:\n",g+1);
    for (int i = 0; i<q; i++)
    {
      scanf("%d",&k);
        if(k==1)
        {
          scanf("%d",&x);
          printf("%d\n",arra[x]);
          arra[x]=0;
            update(1,0,n-1,x,0);

        }
        else if(k==2)
        {
          scanf("%d%d",&x,&y);
          arra[x]=arra[x]+y;
            update(1,0,n-1,x,arra[x]);

        }
        else
        {
          scanf("%d%d",&x,&y);
printf("%d\n",query(1,0,n-1,x,y));

        }

}
    }


    return 0;
}
