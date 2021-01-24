#include<bits/stdc++.h>
using namespace std;

void get_ans(unsigned long long h, unsigned long long w)
{

	for(int n=1; ;n++)
	{
		unsigned long long tmp=h;
		unsigned long long count=0;
		unsigned long long cats=1;
		unsigned long long height=h;

		while(tmp!=1)
		{
			if(tmp%(n+1)!=0)
			{
				break;
			}
			tmp/=(n+1);
			count++;
			cats+=pow(n,count);
            height+=pow(n,count)*tmp;
		}

        if(tmp==1 && cats>=w)
        {
        	cout<<cats-w<<" "<<height<<endl;
        	break;
        }
        
	}
}
int main()
{
	unsigned long long h,w,i,j,k,n;

	while(cin>>h>>w)
	{
		if(h==0 && w==0)
		{
			break;
		}
		get_ans(h,w);
	}
	return 0;
}