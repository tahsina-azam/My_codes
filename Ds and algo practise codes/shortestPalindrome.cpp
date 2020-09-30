#include<bits/stdc++.h>
using namespace std;
int prefix[100000];
std::vector<int> v;

void search_string(string mai , string given)
{

	int j=0;
	int i=0;
 while(i<mai.size())
  {
   // cout<<j<<endl;
  	v.push_back(j);
     if(mai[i]==given[j])
     {
        
     	if(j==given.size()-1)
     	{
     		cout<<"YES"<<endl;
     	    return;
     	}
     	j++;     	
     	i++;
     }
     else
     {
     	if(j==0)
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
     			i++;
     		}
     }
  }
  sort(v.begin(),v.end(),greater<int>());
  int q=given.size()-v[0];
  //cout<<q<<endl;
  for(int i=0;i<q-1;i++)
  {
    cout<<mai[i];
  }
  cout<<given<<endl;
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
    int t;
    //cout<<"Insert the string in which you want to search:"<<endl;
	cin>>mai;
    given=mai;
    reverse(given.begin(),given.end());
 prefix_tree(mai);
 search_string(given,mai);
 initialize_array();
 return 0;
}