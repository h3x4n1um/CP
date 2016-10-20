#include <bits/stdc++.h>

#define oo 50001

using namespace std;

vector <pair<int, int> > kq, a;

void solve(pair <int, int> temp){
    printf("Temp: %d %d\n", temp.first, temp.second);
    kq.push_back(temp);
    if (temp.first <= 0){
        printf("%d\n", kq.size());
        for (int i = kq.size() - 1; i >= 0; --i){
            printf("%d %d\n", kq[i].first, kq[i].second);
        }
        printf("\n");
        return;
    }
    for (int i = a.size() - 1; i >= 0; --i){
        if (a[i].second >= temp.first){
            solve(a[i]);
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("10020.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    int n, m, l, r;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        a.clear();
        kq.clear();
        scanf("%d", &m);
        while (scanf("%d%d", &l, &r), (l != 0 || r !=0)){
            a.push_back(make_pair(l, r));
        }
        sort(a.begin(), a.end());
//        for (int j = 0; j < a.size(); ++j){
//            printf("%d %d\n", a[j].first, a[j].second);
//        }
//        printf("\n");
        pair<int, int> temp;
        temp.first = oo;
        for (int j = a.size() - 1; j >= 0; --j){
            if (a[j].second >= m && a[j].first <= temp.first){
                temp.first = a[j].first;
                temp.second = a[j].second;
            }
        }
//        printf("%d %d\n%d\n\n", temp.first, temp.second, temp_pos);
        solve(temp);
    }
    return 0;
}
