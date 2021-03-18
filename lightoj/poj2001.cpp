#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
  
    const int MAX_N = 2000025;
    int tree[MAX_N][30];
    int cnt[MAX_N];
    int cnting; 
    
    string find(char *str){
        int len = strlen(str);
        string ans;
        ans ="";
        int root = 0; 
        
        for(int i = 0;i<len;++i){
            int id = str[i]-'a';
            root = tree[root][id];
            if(cnt[root]!=1) ans+=str[i];
            if(cnt[root]==1){
                ans+=str[i];
                break;
            }
        }
        return ans;
    }
    
    void insert(char *str){
        int len=strlen(str);
        int root = 0;
        
        for(int i = 0;i<len;++i){
            int id = str[i]-'a';
            if(!tree[root][id]) tree[root][id] = ++cnting;
            root = tree[root][id];
            cnt[root]++;
        }
    }
    
    char str[10000][30];
    
    int main(){
        int num = 0;
        
        while(scanf("%s",str[num])!=EOF){
            insert(str[num]);
            num++;
        }
        
        for(int i=0;i<num;i++){
            string ans;
            ans = find(str[i]);
            printf("%s ",str[i]);
            printf("%s\n",ans.c_str());
        }
     
        return 0;
    }


