#include <bits/stdc++.h>

using namespace std;

int n, a[100000000], d[100000000];

void lkchkl(int i){
    for (int j = 0; j < n; ++j){
        if (d[j] == 0){
            a[i] = j + 1;
            d[j] = 1;
            if (i == n - 1){
                for (int k = 0; k < n; ++k) cout<<a[k];
                cout<<endl;
            }
            else lkchkl(i + 1);
            d[j] = 0;
        }
    }
}

int main(){
    cin>>n;
    lkchkl(0);
    return 0;
}
