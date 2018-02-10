#include <bits/stdc++.h>

using namespace std;

ofstream out1, out2;
int n;
vector <int> a, prime, square;

bool isPrime(int q){
    if (q < 2) return false;
    for (int i = 2; i <= (int) sqrt(q); ++i){
        if (q % i == 0) return false;
    }
    return true;
}

int main(){
    freopen("bl1.inp", "r", stdin);
    out1.open("NGUYENTO.out");
    out2.open("CHPHUONG.out");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;
        if (find(a.begin(), a.end(), temp) == a.end()) a.push_back(temp);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (int i : a){
        if (isPrime(i)) prime.push_back(i);
        if ((int) sqrt(i) * (int) sqrt(i) == i) square.push_back(i);
    }
    if (prime.size() == 0) out1 << 0;
    else for (int i : prime) out1 << i << endl;
    if (square.size() == 0) out2 << 0;
    else for (int i : square) out2 << i << endl;
    return 0;
}
