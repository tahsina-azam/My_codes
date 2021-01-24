#include<bits/stdc++.h>
using namespace std;
int main()
{
	int H1, M1, H2, M2, i, j, k, l, time = 0, tm = 0, pm = 0;
	while (scanf("%d%d%d%d", &H1, &M1, &H2, &M2) != EOF)
	{
		if (H1 == 0 && H2 == 0 && M2 == 0 && M1 == 0)
			return 0;
		if (H2 == 0)
			H2 = 24;
		if (H1 == 0)
			H1 = 24;
		if (H2 == H1 && M1 == M2)
			printf("0\n");
		else if (H1 == H2 && M2 > M1)
			printf("%d\n", M2 - M1);
		else if (H1 == H2 && M2 < M1)
			printf("%d\n", (24 * 60 - M1 + M2));
		else if (H1 > H2)
		{
			if (M1 == 0)
				tm = (24 - H1) * 60;
			else
				tm = (60 - M1) + ((24 - H1 - 1) * 60);
			tm = (H2 * 60) + M2 + tm;
			printf("%d\n", tm);
		}
		else
		{

			if (M2 < M1)
			{
				pm = 60 + M2 - M1;
				H1++;
			}
			else
				pm = M2 - M1;
			pm = pm + (H2 - H1) * 60;
			printf("%d\n", pm);
		}

	}
	return 0;
}