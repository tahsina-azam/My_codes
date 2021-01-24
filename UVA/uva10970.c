#include<stdio.h>
int main()
{
    int M,N,i;
    while((scanf("%d%d",&M,&N))!=EOF)
       {
            if((1<=M && M<=300) && (1<=N && N<=300))
    {
    i=((M*N)-1);
    printf("%d\n",i);
    }
       }
       return 0;
}
