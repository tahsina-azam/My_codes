#include <iostream>
#include <climits>
#define sz 1000
using namespace std;

int adj[sz][sz];

void warshall(int x,int y){
    for (int k = x; k<y; k++)
        for (int i = x; i<y; i++)
            for (int j = x; j<y; j++)
                adj[i][j] = min(adj[i][j], adj[i][k]+adj[k][j]);
}

void init(int n){
    for (int i = 0; i<n; i++)
        for (int j = 0; j<n; j++)
            if(i!=j) adj[i][j] = INT_MAX/4;
}

int main()
{
    int n,m,x,y,z;
    cin >> n >> m;
    init(n);
    for (int i = 0; i<m; i++){
        cin >> x >> y >> z;
        adj[x][y] = z;
        adj[y][x] = z;
    }
    warshall(n);
    for (int i = 0; i<n; i++)
        for (int j = 0; j<n; j++)
            cout << adj[i][j] <<"\t\n"[j==n-1];
    return 0;
}
