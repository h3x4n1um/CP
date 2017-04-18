#include <bits/stdc++.h>

using namespace std;

long long area, edge;
vector <pair <long long, long long> > a;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("PTIT121L.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    for (int i = 0; i < 3; ++i){
        long long _a, _b;
        cin >> _a >> _b;
        a.push_back(make_pair(_a, _b));
        area += _a * _b;
    }
    edge = sqrt(area);
    if (edge * edge != area) cout << 0;
    else{
        for (int i = 0; i < 3; ++i){
            if (a[i].first > edge || a[i].second > edge){
                cout << 0;
                return 0;
            }
        }
        cout << edge;
    }
    return 0;
}
