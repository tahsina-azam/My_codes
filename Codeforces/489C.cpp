  #include<bits/stdc++.h>
  using namespace std;

  int main(){
      int m,s,temp,ind=0,j;
      string b,a;

      cin>>m>>s;

      if(s==0){
        cout<< (m==1?"0 0":"-1 -1") <<endl;
        return 0;
      }

      for(int i=0;i<m;i++){
        temp=min(s,9);
        b += temp+'0';
        s-=temp;
      }

      if(s>0){
        cout<<"-1 -1"<<endl;
        return 0;
      }

      for(int i=m-1;i>=0;i--){
        a+=b[i];
      }

      for(j=0;a[j]=='0';j++);

      a[j]--;
      a[0]++;

      cout<<a<<" "<<b<<endl;

      return 0;
  }
