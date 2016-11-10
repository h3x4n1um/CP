#include <bits/stdc++.h>

using namespace std;

int M;

int inversion(string s){
    int temp = 0;
    for (int i = 0; i < s.size(); ++i){
        for (int j = i + 1; j < s.size(); ++j){
            if (s[i] > s[j]) ++temp;
        }
    }
    return temp;
}

int main(){
    scanf("%d", &M);
    while (M-->0){
        int m, maxN = 0;
        vector <string> a[100000];
        scanf("%*d%d", &m);
        for (int i = 0; i < m; ++i){
            string s;
            cin >> s;
            int temp = inversion(s);
            a[temp].push_back(s);
            maxN = max(maxN, temp);
        }
        for (int i = 0; i <= maxN; ++i){
            for (int j = 0; j < a[i].size(); ++j){
                cout << a[i][j] << endl;
            }
        }
        if (M != 0) puts("");
    }
    return 0;
}
