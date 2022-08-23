#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<ll>
#define vectorpair  vector<pair<ll, ll>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         10007
#define MOD         1000000007
#define endll       "\n"
//template <typename T>
const ll MAXD = 1e2;
vector<vec> matrix;
void floyed(int n)
{
    //here k is the intermediate value
    //i is the source
    //j is the destination
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == k)
                continue;
            for (int j = 0; j < n; j++)
            {
                if (i == j || j == k)
                    continue;

                matrix[i][j]=min(matrix[i][j],matrix[i][k] + matrix[k][j]);
            }
        }
    }
}
int main()
{
    ll n, m, x, y, d;
    cin >> n >> m;
    matrix.assign(n, vec(n, MAXD));
    rep(i, 0, n)
    {
        matrix[i][i] = 0;
    }
    rep(i, 0, m)
    {
        cin >> x >> y >> d;
        x--;
        y--;
        matrix[x][y] = matrix[y][x] = d; //for bidirecitonal graph
    }
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    floyed(n);
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}