#include <bits/stdc++.h>

using namespace std;

int n, biggest;
vector <int> a;

void ve(int n);

int main(){
    int i = 0;
    //freopen("10161.inp", "r", stdin);
    while (true){
        int temp;
        scanf("%d", &temp);
        if (temp == 0) break;
        else{
            biggest = max(biggest, temp);
            a.push_back(temp);
        }
        i += 1;
    }
    ve()
    return 0;
}
