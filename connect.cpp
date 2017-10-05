#include <bits/stdc++.h>

using namespace std;

int n, ans;
vector <pair <int, int> > a;

int main(){
    freopen("connect.inp", "r", stdin);
    freopen("connect.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int x, y;
        scanf("%d%d", &x, &y);
        a.push_back(make_pair(x, y));
    }
    a.push_back(make_pair(0, 0));
    sort(a.begin(), a.end());
    do{
        bool check = true;
        for (int i = 0; i < a.size(); ++i){ v g
            if (a[i].first != a[(i + 1) % a.size()].first && a[i].second != a[(i + 1) % a.size()].second){
                check = false;
                break;
            }
        }
        if (check) ++ans;
    } while(next_permutation(a.begin()+1, a.end()));
    printf("%d", ans);
    return 0;
}
