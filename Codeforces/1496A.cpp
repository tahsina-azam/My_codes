#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,p;
    bool isno=true;
    char str[1005];

    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);

        scanf("%s",str+1);

        if(k==0){
           printf("YES\n");
            continue;
        }

        isno=true;

        for(int i = 1;i <= k;i++) {
            if(str[i] != str[n - i + 1]) {
                isno = 0;break;
            }
        }

        if(isno && k*2<n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}

