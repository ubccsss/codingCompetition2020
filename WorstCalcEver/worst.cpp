#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;
int subtract(int a, int b);
int add(int a, int b) {
    ll a_l = min(a, b) * 1000000000;
    ll b_l = max(a, b) * 1000000000;
    bool neg = (b_l < 0);
    if (neg) while (b_l++) a_l--;
    else while (b_l--) a_l++;
    return (int)(a_l/1000000000);
}
int subtract(int a, int b) {
    b *= -1;
    return add(a, b);
}
int multiply(int a, int b) {
    int res = 0;
    bool neg = ((a < 0 && b > 0) || (a > 0 && b < 0));
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;
    while (b > 0) {
        res = add(res, a);
        b = subtract(b, 1);
    }
    return neg ? -res : res;
}
int divide(int a, int b) {
    int res = 0;
    bool neg = ((a < 0 && b > 0) || (a > 0 && b < 0));
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;
    while (a > 0) {
        res = add(res, 1);
        a = subtract(a, b);
    }
    return neg ? -res : res;
}

int main() {
    int a, b;
    char op;
    cin >> a >> b >> op;
    if (op == '+')
        cout << add(a,b) << endl;
    else if (op == '-')
        cout << subtract(a,b) << endl;
    else if (op == '*')
        cout << multiply(a,b) << endl;
    else if (op == '/')
        cout << divide(a,b) << endl;
    else
        cout << "invalid input" << endl;
    return 0;
}
