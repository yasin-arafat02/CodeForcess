#include <iostream>
#include <algorithm>
using namespace std;

string whoWins(int n) {
    int rem[4] = {0};

    for (int i = 0; i < n; i++) {
        rem[i % 4]++;
    }

    int pairCount = min(rem[0], rem[3]) + min(rem[1], rem[2]);
    int used = pairCount * 2;
    int left = n - used;

    return (left % 2 == 1) ? "Alice" : "Bob";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << whoWins(n) << '\n';
    }
    return 0;
}
