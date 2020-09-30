#include<bits/stdc++.h>
using namespace std;


int main()
{
	char s;
	int n, cnt = 0;

	while (scanf("%c",&s) != EOF)
	{
		if (s == '\0')
		{
			break;
		}
		else if (s == '"' && cnt == 0)
		{
			printf("``");
			cnt = 1;
		}
		else if (s == '"' && cnt == 1)
		{
			printf("''");
			cnt=0;
		}
		else
		{
			printf("%c", s);
		}

	}


	return 0;
}
