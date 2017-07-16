#include <bits/stdc++.h>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int n;
    double m;
    string x;
    // Read and save an integer, double, and String to your variables.
    scanf("%d%f", &n, &m);
    getline(cin, x);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", n + i);
    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + m);
    // Concatenate and print the String variables on a new line
    cout << s + x;
    // The 's' variable above should be printed first.
    return 0;
}
