#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define INIT (Edge *)malloc(sizeof(Edge))
int n, m;
int visited[40001];

typedef struct node
{
	int adjacent;
	int w;
	struct node *next;
}Edge;

struct Node
{
	Edge *head;
}po[40005];

struct NODE
{
	int v;
}queue[40005];
int dis[40005][2];
int f, r;
int d[40001];
int max = -1;

void del(int a,int b)
{
	Edge *s;

	s = po[a].head;
	while(s->next)
	{
		if(s->next->adjacent==b)
		{
			s->next = s->next->next;
			return ;
		}
		else
			s = s->next;
	}
}

void bfs()
{
	int i, v;
	Edge *s;

	f = r = -1;
	for(i = 0; i < n; i++)
		if(d[i]==1)
			queue[++f].v = i;
	while(f!=r)
	{
		++r;
		v = queue[r].v;
		s = po[v].head;
		while(s->next)
		{
			if(dis[v][0]+s->next->w>dis[s->next->adjacent][1])
				dis[s->next->adjacent][1] = dis[v][0]+s->next->w;
			if(dis[s->next->adjacent][0]<dis[s->next->adjacent][1])
			{
				dis[s->next->adjacent][0] += dis[s->next->adjacent][1];
				dis[s->next->adjacent][1] = dis[s->next->adjacent][0]-dis[s->next->adjacent][1];
				dis[s->next->adjacent][0] = dis[s->next->adjacent][0]-dis[s->next->adjacent][1];
			}
			del(s->next->adjacent,v);
			d[v]--;d[s->next->adjacent]--;
			if(d[s->next->adjacent]==1)
				queue[++f].v = s->next->adjacent;
			s->next = s->next->next;
		}
	}
}

int main()
{
	int i;
	Edge *s;
	int st, ep, w;
	char pos[2];

	scanf("%d%d",&n,&m);
	for(i = 0; i < n; i++)
	{
		po[i].head = INIT;
		po[i].head->next = NULL;
	}
	memset(d,0,sizeof(d));
	memset(dis,0,sizeof(dis));
	for(i = 0; i < m; i++)
	{
		scanf("%d%d%d%s",&st,&ep,&w,pos);
		st--,ep--;
		d[st]++,d[ep]++;
		s = INIT;
		s->adjacent = ep;s->w = w;
		s->next = po[st].head->next;
		po[st].head->next = s;
		s = INIT;
		s->adjacent = st;s->w = w;
		s->next = po[ep].head->next;
		po[ep].head->next = s;
	}
	bfs();
	for(i = 0; i < n; i++)
		if(dis[i][0]+dis[i][1]>max)
			max = dis[i][0]+dis[i][1];
	printf("%d\n",max);
	return 1;
}

