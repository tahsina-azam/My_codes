#include <stdio.h>
#include <math.h>
int main()
{
	double left,right,mid;
	double l,n,s,c;
	double r;
	int Case = 1;
	int u;
	scanf ("%d",&u);
	while (u--)
	{
		scanf ("%lf %lf %lf",&l,&n,&c);
		printf ("Case %d: ",Case++);
		s = (1.0+n*c)*l;
		left = 0;
		right = l / 2.0;
		while (right - left > 1e-8)
		{
			mid = (right + left) / 2.0;
			r = (l*l + 4*mid*mid) / (8*mid);
			double t = asin(l/2/r);
			if (t * r * 2.0 < s)
				left = mid;
			else
				right = mid;
		}
		printf ("%.6lf\n",left);
	}
	return 0;
}
