#include<bits/stdc++.h>
using namespace std;

#define N 3000

static unsigned long long c[N];
static unsigned long long coins[100] ;
static unsigned long long num[100];

int main(){
    unsigned long long i, j,x,y,z;
    unsigned long long n;

scanf("%llu%llu",&x,&y);

for(i=0;i<x;i++)
  scanf("%llu",&coins[i]);
for(i=0;i<x;i++)
  scanf("%llu",&num[i]);
    c[0] = 1;
    for(i = 0; i < x; ++i){
        for(j = coins[i]; j < 1001; ++j)
        //if()
            c[j] += c[j - coins[i]];
    }



        printf("%llu\n", c[y]);

    return 0;
}

