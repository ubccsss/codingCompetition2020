#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    bool yes = false;
    while (7 * x <= n) {
        if ((n - 7 * x) % 11 == 0) {
            yes = true;
            break;
        } else {
            x++;
        }
    }
    if (yes) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
