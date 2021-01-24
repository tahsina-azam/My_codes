#include<stdio.h>
int main()
{
    int T,i,j,k,a[3],b[20],c,d,swap;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
          for (c = 0 ; c < 3 - 1; c++)
  {
    for (d = 0 ; d < 3 - c - 1; d++)
    {
      if (a[d] > a[d+1])
      {
        swap       = a[d];
        a[d]   = a[d+1];
        a[d+1] = swap;
      }
    }
  }
b[i]=a[1];
    }
    for(j=0;j<T;j++)
    {
        printf("Case %d: %d\n",(j+1),b[j]);
    }
    return 0;
}
