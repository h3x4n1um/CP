#include <bits/stdc++.h>

using namespace std;

int n;
long *a;
vector <long> f;

int main(){
    scanf("%d", &n);
    a = new long [n];
    for (int i = 0; i < n; ++i){
        scanf("%ld", &a[i]);
    }
    for (int i = 0; i < n; ++i){
        vector <long>::iterator it = lower_bound(f.begin(), f.end(), a[i]);
        if (it == f.end()) f.push_back(a[i]);
        else *it = a[i];
    }
    printf("%d", f.size());
    return 0;
}
