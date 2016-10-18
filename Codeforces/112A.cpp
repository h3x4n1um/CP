#include <bits/stdc++.h>

using namespace std;

int sum1, sum2;
string s1, s2;

void lowercase(string &s){
    for (int i = 0; i < s.size(); ++i){
        if (s[i] < 97) s[i] = s[i] + 32;
    }
}

int main(){
    cin >> s1 >> s2;
    lowercase(s1);
    lowercase(s2);
    for (int i = 0; i < s1.size(); ++i){
        if (sum1 == sum2){
            sum1 += s1[i];
            sum2 += s2[i];
        }
        if (sum1 != sum2){
            if (sum1 > sum2) printf("%d", 1);
            if (sum1 < sum2) printf("%d", -1);
            return 0;
        }
    }
    printf("%d", 0);
    return 0;
}
