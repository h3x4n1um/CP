#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("FRIEND.inp", "r", stdin);
    freopen("FRIEND.out", "w", stdout);
    vector<long int> a;
    long int n, b, kq = 0;
    cin>>n>>b;
    for (long int i = 0; i < n; ++i){
        long int temp;
        cin>>temp;
        a.push_back(temp);
    }
    for (long int i = 0; i < n - 1; ++i){
        for (long int j = i; j < n; ++j){
            if (a[i] + a[j] == b) ++kq;
        }
    }
    cout<<kq;
    return 0;
}
