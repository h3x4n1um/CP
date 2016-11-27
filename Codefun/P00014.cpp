#include <bits/stdc++.h>

using namespace std;

string A, B;

int main(){
    cin >> A >> B;
    if (A[0] == B[0]) printf("0");
    else cout << abs(B[0] - A[0]) - 1;
    return 0;
}
