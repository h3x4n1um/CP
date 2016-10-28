#include <bits/stdc++.h>

using namespace std;

int n, a[100000000];

void lknhiphan(int i){
    for (int j = 0; j < 2; ++j){
        a[i] = j;
        if (i == n - 1){
            for (int k = 0; k < n; ++k) cout<<a[k];
            cout<<endl;
        }
        else lknhiphan(i + 1);
    }
}

int main(){
    cin>>n;
    lknhiphan(0);
    return 0;
}
