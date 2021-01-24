#include <bits/stdc++.h>
using namespace std;

int a[1000008];

unsigned long long calculate(unsigned long long y, int casenum)
{

	unsigned long long z;
	unsigned long long x;
	unsigned long long w;

	x = (10 * y) / 9;

	x--;
	
	printf("Case %d:", casenum);
	
	if(x - (x / 10) == y) {
		printf(" %lld", x);
	}

	x++;


	if(x - (x / 10) == y) {
		printf(" %lld", x);
	}

	x++;


	if(x - (x / 10) == y) {
		printf(" %lld", x);
	}
		
	printf("\n");
}

int main()
{

	int t;
	unsigned long long x;
	unsigned long long y;

	scanf("%d", &t);

	for (int casenum = 1; casenum <= t; casenum++) {
		scanf("%lld", &y);
		calculate(y, casenum);
	}

return 0;
}
