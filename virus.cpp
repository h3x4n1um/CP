#include <bits/stdc++.h>

using namespace std;

int t;

int main(){
    freopen("virus.inp", "r", stdin);
    freopen("virus.out", "w", stdout);
    while (scanf("%d", &t) != EOF){
        int n;
        scanf("%d", &n);
        string p;
        cin >> p;
        vector <string> a;
        for (int i = 0; i < n; ++i){
            string temp;
            cin >> temp;
            a.push_back(temp);
        }
        map <int, map <char, int> > next;
        map <int, map <int, int> > f;
        for (int i = 0; i < p.size(); ++i){
            for (int j = i + 1; j < p.size(); ++j){
                next[i][p[j]] = j - i;
            }
        }
        for (int k = 0; k < a.size(); ++k){
            for (int i = 0; i < a[k].size(); ++i){
                if ()
            }
        }
    }
    return 0;
}
