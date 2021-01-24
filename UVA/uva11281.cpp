#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    string ans="";
    double r,d,x,y,z,s;
    cin>>n;
    vector<double>circles,pegs;
    while(n--){
        cin>>d;
        circles.push_back(d);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x>>y>>z;
        double xx = max(max(x,y),z);
        double yy = min(min(x,y),z);
        if(yy*yy+(x+y+z-xx-yy)*(x+y+z-xx-yy)<xx*xx)pegs.push_back(xx);
        else pegs.push_back((2.0 * x*y*z) / sqrt((x + y + z) * (y - x + z) * (x - y + z) * (x + y - z)));
    }
    for(int i=0;i<pegs.size();i++){
        for(int j=0;j<circles.size();j++){
            if(circles[j]-pegs[i]>=0)ans=ans+" "+to_string(j+1);
        }
        if(!ans.empty()){
            printf("Peg %c will fit into hole(s):",'A'+i);
            cout<<ans<<endl;
        }
        else printf("Peg %c will not fit into any holes\n",'A'+i);
        ans="";
    }
}
 
