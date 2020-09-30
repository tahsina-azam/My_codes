#include<bits/stdc++.h>
using namespace std;
#define mx 110000
int tree[mx*4];
int arr[mx];
int update(int node,int b,int e,int i,int value)
{
    if(i<b||i>e)
       return 0;
    if(b==i&&e==i)
    {
       tree[node]=value;
       return 0;
    }

    int mid;
    mid=(b+e)/2;
    update(node*2,b,mid,i,value);
    update(node*2+1,mid+1,e,i,value);
    tree[node]=min(tree[node*2],tree[node*2+1]);
}
int qu(int node,int b,int e,int i,int j)
{
    if(j<b||i>e)
       return -1;
    if(i<=b&j>=e)
         return tree[node];
    int p1,p2,mid;
    mid=(b+e)/2;
    p1=qu(node*2,b,mid,i,j);
    p2=qu(node*2+1,mid+1,e,i,j);
    if(p1==-1)
        return p2;
    else if(p2==-1)
         return p1;
    else
    return min(p1,p2);
}
int main()
{
int n,q,i,a,b,p,t,l;
scanf("%d",&t);
for(l=1;l<=t;l++)
{
 scanf("%d %d",&n,&q);
for(i=1;i<=n;i++){
    scanf("%d",&arr[i]);
    update(1,1,n,i,arr[i]);
}
printf("Case %d:\n",l);
while(q)
{
    scanf("%d %d",&a,&b);
    p=qu(1,1,n,a,b);
    printf("%d\n",p);
    q--;
}

}

}
