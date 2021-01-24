#include<bits/stdc++.h>
using namespace std;

#define N 30008

static long long c[N];
static const unsigned coins[] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};

int main(){
    unsigned i, j;
    float n;

    c[0] = 1;
    for(i = 0; i < 11; ++i){
        for(j = coins[i]; j < N; ++j)
            c[j] += c[j - coins[i]];
    }

    while(scanf("%f", &n) == 1 && n){
    
        unsigned coin = (unsigned)((n + 0.001) * 100);

        
        printf("%6.2f%17lld\n", n, c[coin]);
    }
    return 0;
}
