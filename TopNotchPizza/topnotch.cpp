#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int I, O;
vector<int> toppings;
vector<vector<int>> orders;
int currmax = 0;

int bt(int order) {
    if (order == -1) return 0;
    bool addable = true;
    for (int i = 0; i < I; i++) {
        toppings[i] -= orders[order][i];
        // not possible
        if (toppings[i] < 0) {
            addable = false;
            // add the subtracted toppings back and break
            for (int j = 0; j <= i; j++) {
                toppings[j] += orders[order][j];
            }
            break;
        }
    }
    int added = 0;
    if (addable) {
        added = 1 + bt(order-1);
        for (int i = 0; i < I; i++) {
            toppings[i] += orders[order][i];
        }
    }
    int notadded = bt(order-1);
    return max(added, notadded);
}

int main() {
    cin >> I >> O;
    toppings = vector<int>(I, 0);
    for (int i = 0; i < I; i++) {
        cin >> toppings[i];
    }
    orders = vector<vector<int>>(O, vector<int>(I, 0));
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < I; j++) {
            cin >> orders[i][j];
        }
    }
    cout << bt(O-1) << endl;

    return 0;
}
