#include<bits/stdc++.h>
using namespace std;
const int maxnum = 0X3f3f3f3f ;

int main()
{
    int N,child[110][110],parent[105];

    scanf("%d",&N);
    memset(child,0,sizeof(child));
    memset(parent,0,sizeof(parent));

    for(int i=1 ; i<=N ; i++)
    {
        for(int j=1 ; ; j++)
        {
            scanf("%d",&child[i][j]);
            if(child[i][j] == 0){
                break;
            }
            parent[child[i][j]]++;
        }
    }

    for(int i=1 ; i<=N ; i++)
    {
        for(int j=1 ; j<=N ; j++)
        {
            if(parent[j]==0)
            {
                if(i == 1){
                     printf("%d",j);
                }
                else{
                    printf(" %d",j);
                }

                parent[j] = maxnum;

                for(int k=1;;k++)
                {
                    if(child[j][k] == 0){
                        break;
                    }
                    parent[child[j][k]]--;
                }
                break;
            }
        }
    }
   printf("\n");
   return 0;
}
