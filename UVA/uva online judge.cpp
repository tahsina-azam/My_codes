#include<bits/stdc++.h>
using namespace std;

long long problem(long long g, long long cnt)
{

    if (g % 2 != 0)
      g = 3 * g + 1;
    else
      g = g / 2;
    cnt++;

    if (g == 1)
    {
      return cnt + 1;
    }
    problem(g,cnt);

}
int main()
{

  //ctrl + alt + f to auto format
  //ctrl + b to compile
  //ctrl + shift + b to compile and run


  long long  i, j, k, l, m, n, cnt, andcnt;
  vector<long long> v;
  while (scanf("%lli%lli", &i, &j) != EOF)
  {
    cnt = 0;
    andcnt = 0;
    if (i > j)
    {
      k = i;
      l = j;
    }
    else
    {
      k = j;
      l = i;
    }
    for (int p = l; p <= k; p++)
    {
      cnt = 0;
      if (p == 1)
        v.push_back(1);
      else
      {
        int g = p;
        long long q = problem(g, cnt);
        v.push_back(q);
      }
    }
    sort(v.begin(), v.end(), greater<long long>());
    cout << i << " " << j << " " << v[0] << endl;
    v.clear();
  }
  return 0;
}
