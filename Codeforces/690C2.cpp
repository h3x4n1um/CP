#include <bits/stdc++.h>

// limit
#define oo 1000010007LL
#define OO 1000000000007LL
#define maxN 1007

// loop
#define fto(i, x, y) for(int i = (x); i <= (y); ++i)
#define fdto(i, x, y) for(int i = (x); i >= (y); --i)
#define ftoa(i, x, y, a) for(int i = (x); i <= (y); i += a)
#define fdtoa(i, x, y, a) for(int i = (x); i >= (y); i -= a)
#define ftosqrt(i, x, y) for(int i = (x); i*i <= (y); ++i)
#define ftoit(it, var) for (__typeof(var.begin()) it = var.begin(); it != var.end(); ++it)
#define fdtoit(rit, var) for (__typeof(var.rbegin()) rit = var.rbegin(); rit != var.rend(); ++rit)

// debug
#define debug cout << "*" << endl;
#define bug1d(a, x, y) { cout << #a << ": "; fto(_, x, y) cout << a[_] << ' '; cout << endl; }
#define bug2d(a, x, y, u, v) { cout << #a << ": " << endl; fto(i, x, y) {fto(j, u, v) cout << a[i][j] << ' '; cout << endl;}; cout << endl;}
#define bug(a) cout << #a << " = " << a << endl;
#define bug2(a, b) cout << #a << " = " << a << "; "; cout << #b << " = " << b << endl;
#define bug3(a, b, c) cout << #a << " = " << a << "; "; cout << #b << " = " << b << "; "; cout << #c << " = " << c << endl;

// operation
#define mp make_pair
#define pb push_back
#define pf push_front
#define mt make_tuple

// structure
#define ii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define vii vector<ii>
#define matrix vector<vi>
#define iii tuple <int, int, int>
#define iiii tuple <int, int, int, int>

// get value
#define FF first
#define SS second
#define get(x, a) get<(x)>(a)

// data type
#define ll long long
#define ull unsigned long long

// function
#define lb lower_bound
#define ub upper_bound

// const value
#define pi 3.14159265358979323846264338327950288419716939937510

using namespace std;

int step[maxN];
vi adj[maxN];

void BFS(int start) {
    queue <int> q;
    q.push(start);

    while (q.size()) {
        int u = q.front(); q.pop();
        fto (i, 0, (int)adj[u].size()-1) {
            int v = adj[u][i];
            if (step[v]) continue;

            step[v] = step[u]+1;
            q.push(v);
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("tmp.inp", "r", stdin);
        freopen("tmp.out", "w", stdout);
    #endif // ONLINE_JUDGE

    int n, m;
    scanf("%d%d", &n, &m);

    fto (i, 1, m) {
        int u, v;
        scanf("%d%d", &u, &v);
        adj[u].pb(v); adj[v].pb(u);
    }

    step[1] = 1;
    BFS(1);

    int maxK = 0;
    int start = 0;

    fto (i, 1, n) {
        if (step[i] > maxK) {
            maxK = max(maxK, step[i]);
            start = i;
        }
    }

    maxK = 0;
    fto (i, 1, n) step[i] = 0;

    step[start] = 1;
    BFS(start);

    maxK = 0;
    fto (i, 1, n) {
        if (step[i] > maxK) maxK = max(maxK, step[i]);
    }

    printf("%d\n", maxK-1);

    return 0;
}
