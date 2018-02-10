#include <bits/stdc++.h>

using namespace std;

int n, ans;
vector <int> t, r, out;
vector <pair <int, int> > lech;

bool cmp(pair <int, int> a, pair <int, int> b){
    return a.second >= b.second && a.first > b.first;
}

int main(){
    freopen("queue.inp", "r", stdin);
    freopen("queue.out", "w", stdout);
    int temp;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &temp);
        t.push_back(temp);
    }
    for (int i = 0; i < n - 1; ++i){
        scanf("%d", &temp);
        r.push_back(temp);
        lech.push_back(make_pair(i, t[i] + t[i + 1] - r[i]));
    }
    sort(lech.begin(), lech.end(), cmp);
    temp = 0;
    while (lech[temp].second > 0 && temp < lech.size()){
        t[lech[temp].first] = r[lech[temp].first];
        t.erase(t.begin() + lech[temp].first + 1);
        out.push_back(lech[temp].first + 1 + 1);
        lech.erase(lech.begin() + lech[temp].first, lech.begin() + lech[temp].first + 2);
        ++temp;
    }
    for (int i = 0; i < t.size(); ++i){
        ans += t[i];
    }
    printf("%d\n", ans);
    for (int i = out.size() - 1; i >= 0; --i){
        printf("%d ", out[i]);
    }
    return 0;
}
