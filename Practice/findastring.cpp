#include<bits/stdc++.h>
using namespace std;
int prefix[100000];


void search_string(string mai , string given, int cnt)
{
//cout<<mai<<" "<<given<<endl;
    if(cnt!=0)
    {
        cout<<"\n";
    }

    int count=0;
    int inAny=0;
	int j=0;
	int i=0;
 while(i<mai.size())
  {
    //cout<<"i="<<i <<" "<<j<<endl;
  	
     if(mai[i]==given[j])
     {
        //cout<<given[j]<<" "<<j<<" "<<i<<endl;
     	if(j==given.size()-1)
     	{
     		//cout<<"YES"<<endl;
            inAny=1;
     	    cout<<(i-(given.size())+1)<<endl;
            i=i-(given.size()-1)+1;
            j=0;
     	}
         else
         {
            j++;        
            i++;
         }
     }
     	else if(j==0)
     	{
     		i++;
     	}
     	else if(mai[i]==given[j-prefix[j-1]-1])
     		{
     			j=j-prefix[j-1];
     			i++;
     		}
     	else
     		{
     			j=j-prefix[j-1]-1;
     		}
     }
    
  }
 


void prefix_tree(string a)
{
prefix[0]=0;
int i=0;
int j=1;

while(j<a.size())
{
    if(a[i]==a[j])
     {
        prefix[j]=i+1;
        i++;
        j++;
    }    
    else 
    {
    	while(i>=0)
    	{
    		if(a[prefix[i-1]]==a[j])
    		{
    			prefix[j]=prefix[i-1]+1;
    			i=prefix[i-1]+1;
    			j++;
    			break;
    		}
    		else if(i==0)
    		{
    			if(a[i]!=a[j])
    			{
    				prefix[j]=0;
    				j++;
    				break;
    			}
    		}
    		else
    		{
              i=prefix[i-1];
    		}
    	}
    }
}
/*for(int i=0;i<a.size();i++)
{
	cout<<prefix[i]<<endl;
}*/

}

void initialize_array()
{
	for(int i=0;i<100000;i++)
	{
		prefix[i]=0;
	}
}

int main()
{
	string mai;
	string given;
    long long p;
    long long cnt=0;
    
   while(cin>>p)
   {
    //cout<<"Insert the string in which you want to search:"<<endl;
    cin>>given;
    //cout<<"Insert the string which you want to search"<<endl;
    cin>>mai;
 prefix_tree(given);
 search_string(mai,given,cnt);
 initialize_array();
 cnt++;
   }
    
 return 0;
}