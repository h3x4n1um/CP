#include <bits/stdc++.h>

using namespace std;

int n, a[100000000];

void lkchl(int i){
    for (int j = 0; j < n; ++j){
        a[i] = j + 1;
        if (i == n - 1){
            for (int k = 0; k < n; ++k) cout<<a[k];
            cout<<endl;
        }
        else lkchl(i + 1);
    }
}

int main(){
    cin>>n;
    lkchl(0);
    return 0;
}
