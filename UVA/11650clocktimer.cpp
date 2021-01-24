#include<bits/stdc++.h>
using namespace std;

void findMirrorImage(int a,int b)
{
	int Hans,Mans;

	
	 if(a<=6 && b>0)
	{
		 Hans=12-a-1;
	}
	else if(a<=6 && (b==0 || b==30))
	{
     Hans=12-a;
	}
	else if(a>6 && b>0 && a!=12)
	{
		Hans=6-(a-6)-1;
		if(Hans==0)
		{
			Hans=12;
		}
	}
	else
	{
		Hans=6-(a-6);
		if(Hans==0 && b>0)
		{
			Hans=11;
		}
		if(Hans==0 && b==0)
		{
			Hans=12;
		}
	}
	if(Hans>=10)
	cout<<Hans<<":";
    else
    {
    	cout<<"0"<<Hans<<":";
    }
	if(b==0)
	{
     cout<<"00"<<endl;
	}
	else if(b<=30)
	{
     cout<<(60-b)<<endl;
	}
	else
	{
		Mans=60-b;
		if(Mans<10)
		{
			cout<<"0"<<Mans<<endl;
		}
		else
		{
			cout<<Mans<<endl;
		}
	}
}

int main()
{
	int T,a,b,i;
	char c;
    
    cin>>T;
	for(i=0;i<T;i++)
	{
		cin>>a>>c>>b;
		findMirrorImage(a,b);
	}
	return 0;
}