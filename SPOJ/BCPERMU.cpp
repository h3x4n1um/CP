#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> a;

void resetvector(vector <int> a, int n){
    a.erase(a.begin(), a.end());
}

void hoanvi(vector <int> a){

}

int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) a.push_back(i + 1);
    //resetvector(a, n);
    for (int i = 0; i < n; ++i){
        cout<<a[i]<<" ";
    }
    return 0;
}
