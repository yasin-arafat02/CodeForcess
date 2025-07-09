#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        // Convert entire string to lowercase
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }

        if (s == "yes") cout << "YES\n";
        else cout << "NO\n";
    }
}
