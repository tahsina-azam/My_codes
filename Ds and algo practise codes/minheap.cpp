#include<bits/stdc++.h>
using namespace std;
vector<int> minHeap(0);
int size;


class MinHeap
{
public:
	void insertKey(int num)
{
	minHeap.push_back(num);
	int i=minHeap.size()-1;
	int n=i;
	
	if(i!=0)
	{
		while(n>=0)
	{
		int n=(i-1)/2;
		if(minHeap[n]>minHeap[i])
		{
           int temp=minHeap[i];
           minHeap[i]=minHeap[n];
           minHeap[n]=temp;
           i=n;
		}
		else
		{
			break;
		}
	}
	}
	size=minHeap.size();
}

void deleteKey(int key)
{
	
	int index;

	for(int i=0;i<minHeap.size();i++)
	{
		if(minHeap[i]==key)
        {
        	index=i;
		    break;
        }
	}
	
	minHeap[index]=minHeap[size-1];
	minHeap[size-1]=INT_MAX;
	size=size-1;
	while(1)
	{
		if((2*index+1)<size && (2*index+2)<size)
		{
			int ind=minHeap[2*index+1]<minHeap[2*index+2]?(2*index+1):(2*index+2);
            int temp=minHeap[index];
            minHeap[index]=minHeap[ind];
            minHeap[ind]=temp;
		}
		else
		{
			break;
		}
	}
	}
};

int main()
{
  MinHeap m;
  m.insertKey(2);
  m.insertKey(3);
  m.insertKey(4);
  m.insertKey(5);
  m.insertKey(1);
  m.deleteKey(2);

  for(int i=0;i<size;i++)
  	cout<<minHeap[i]<<endl;
  return 0;

}