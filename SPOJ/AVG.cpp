#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("AVG.inp", "r", stdin);
    freopen("AVG.out", "w", stdout);
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i){
        int m, kq = 0;
        cin>>m;
        vector<int> a;
        for (int j = 0; j < m; ++j){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for (int j = 0; j < m - 2; ++j){
            for (int l = j + 2; l < m; ++l){
                int k = j + 1;
                while (k <= l - 1){
                    if (a[i] + a[l] == 2*a[k]) ++kq;
                    ++k;
                }
            }
        }
        cout<<kq<<endl;
    }
    return 0;
}
