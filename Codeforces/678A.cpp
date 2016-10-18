#include <bits/stdc++.h>

using namespace std;

unsigned long long int n, k;

int main(){
    cin >> n >> k;
    cout << (unsigned long long int) ceil((double) (n + 1) / k) * k;
    return 0;
}
