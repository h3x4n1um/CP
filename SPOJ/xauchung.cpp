#include <bits/stdc++.h>

using namespace std;

pair <string, string> s;
pair <int, int> f[10000];
int length;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("xauchung.inp", "r", stdin);
        freopen("xauchung.out", "w", stdout);
    #endif // ONLINE_JUDGE
    cin >> s.first >> s.second;
    for (int i = 0; i < s.first.size(); ++i){
        for (int j = 0; j < s.second.size(); ++j){
            if (s.first[i] == s.second[j] && f[i].first == 0 && f[j].second == 0){
                pair <int, int> MAX;
                for (int k = i; k >= 0; --k){
                    if (f[k].first != 0 && MAX.first < f[k].first) MAX.first = f[k].first;
                }
                for (int k = j; k >= 0; --k){
                    if (f[k].second != 0 && MAX.second < f[k].second) MAX.second = f[k].second;
                }
                f[i].first = f[j].second = min(MAX.first, MAX.second) + 1;
                if (length < f[i].first) length = f[i].first;
            }
        }
    }
    #ifndef ONLINE_JUDGE
        string temp;
        for (int i = s.first.size() - 1; i >= 0; --i){
            if (f[i].first == length){
                temp = s.first[i] + temp;
                --length;
            }
        }
        cout << temp;
    #endif // ONLINE_JUDGE
    #ifdef ONLINE_JUDGE
        printf("%d", length);
    #endif // ONLINE_JUDGE
    return 0;
}
