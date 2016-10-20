#include <bits/stdc++.h>

using namespace std;

string s1, s2, maxs1, maxs2, mins1, mins2;

int val(string s){
    int temp, a = 0;
    for (int i = 0; i < s.length(); ++i){
        if (s[i] == '0') temp = 0;
        if (s[i] == '1') temp = 1;
        if (s[i] == '2') temp = 2;
        if (s[i] == '3') temp = 3;
        if (s[i] == '4') temp = 4;
        if (s[i] == '5') temp = 5;
        if (s[i] == '6') temp = 6;
        if (s[i] == '7') temp = 7;
        if (s[i] == '8') temp = 8;
        if (s[i] == '9') temp = 9;
        a = a * 10 + temp;
    }
    return a;
}

int main(){
    cin >> s1 >> s2;
    maxs1 = s1;
    mins1 = s1;
    maxs2 = s2;
    mins2 = s2;
    for (int i = 0; i < s1.length(); ++i){
        if (s1[i] == '5') maxs1[i] = '6';
        if (s1[i] == '6') mins1[i] = '5';
    }
    for (int i = 0; i < s2.length(); ++i){
        if (s2[i] == '5') maxs2[i] = '6';
        if (s2[i] == '6') mins2[i] = '5';
    }
    cout << val(mins1) + val(mins2) << " " << val(maxs1) + val(maxs2);
    return 0;
}
