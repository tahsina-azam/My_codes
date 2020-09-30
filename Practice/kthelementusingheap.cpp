#include<bits/stdc++.h>
using namespace std;
int size;
int ans;

class MaxHeap
{
private:
vector<int> Heap(0);
public:
	void insertKey(int num)
{
	Heap.push_back(num);
	int i=Heap.size()-1;
	int n=i;
	
	if(i!=0)
	{
		while(n>=0)
	{
		int n=(i-1)/2;
		if(Heap[n]<Heap[i])
		{
           int temp=Heap[i];
           Heap[i]=Heap[n];
           Heap[n]=temp;
           i=n;
		}
		else
		{
			break;
		}
	}
	}
	size=Heap.size();
	ans=Heap[0];
}
void deleteKey(int key)
{
	
	int index;

	for(int i=0;i<Heap.size();i++)
	{
		if(Heap[i]==key)
        {
        	index=i;
		    break;
        }
	}
	
	Heap[index]=Heap[size-1];
	Heap[size-1]=0;
	size=size-1;
	while(1)
	{
		if((2*index+1)<size || (2*index+2)<size)
		{
			int ind=Heap[2*index+1]>Heap[2*index+2]?(2*index+1):(2*index+2);
            int temp=Heap[index];
            Heap[index]=Heap[ind];
            Heap[ind]=temp;
            index=ind;
		}
		else
		{
			break;
		}
	}
	ans=Heap[0];
	}

};
int main()
{
	MaxHeap a;
	int size,k,val;
	
	cin>>size;
	for(int i=0;i<size;i++)
	{
     cin>>val;
     a.insertKey(val);
	}
	cin>>k;
	for(int j=1;j<k;j++)
	{
		a.deleteKey(ans);
	}
	cout<<ans<<endl;
	return 0;
}