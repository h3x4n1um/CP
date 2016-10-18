#include <bits/stdc++.h>

using namespace std;

int n;
vector <long long int> a;

int main(){
    cin >> n;
    for (int i = 0; i < n; ++i){
        long long int temp;
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    long long int tong = a[a.size() - 1];
    for (int i = a.size() - 2; i >= 0; --i){
        while (a[i] >= a[i + 1] && a[i] > 0) --a[i];
        tong += a[i];
    }
    cout << tong;
    return 0;
}
