#include <bits/stdc++.h>

using namespace std;

int main(){
    srand (time(NULL));
    for (int i = 1; i <= 4; ++i){
        cout << rand() % 1000 << " x " << rand() % 1000 << endl;
    }
    return 0;
}

