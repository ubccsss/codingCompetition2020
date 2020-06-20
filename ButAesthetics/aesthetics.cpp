#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

vector<string> t {"░█▀▀█ ", "▒█▀▀█ ", "▒█▀▀█ ", "▒█▀▀▄ ", "▒█▀▀▀ ", "▒█▀▀▀ ", "▒█▀▀█ ", "▒█░▒█ ", "▀█▀ ", "░░░▒█ ", "▒█░▄▀ ", "▒█░░░ ", "▒█▀▄▀█ ", "▒█▄░▒█ ", "▒█▀▀▀█ ", "▒█▀▀█ ", "▒█▀▀█ ", "▒█▀▀█ ", "▒█▀▀▀█ ", "▀▀█▀▀ ", "▒█░▒█ ", "▒█░░▒█ ", "▒█░░▒█ ", "▀▄▒▄▀ ", "▒█░░▒█ ", "▒█▀▀▀█ ", "  "};
vector<string> m {"▒█▄▄█ ", "▒█▀▀▄ ", "▒█░░░ ", "▒█░▒█ ", "▒█▀▀▀ ", "▒█▀▀▀ ", "▒█░▄▄ ", "▒█▀▀█ ", "▒█░ ", "░▄░▒█ ", "▒█▀▄░ ", "▒█░░░ ", "▒█▒█▒█ ", "▒█▒█▒█ ", "▒█░░▒█ ", "▒█▄▄█ ", "▒█░▒█ ", "▒█▄▄▀ ", "░▀▀▀▄▄ ", "░▒█░░ ", "▒█░▒█ ", "░▒█▒█░ ", "▒█▒█▒█ ", "░▒█░░ ", "▒█▄▄▄█ ", "░▄▄▄▀▀ ", "  "};
vector<string> b {"▒█░▒█ ", "▒█▄▄█ ", "▒█▄▄█ ", "▒█▄▄▀ ", "▒█▄▄▄ ", "▒█░░░ ", "▒█▄▄█ ", "▒█░▒█ ", "▄█▄ ", "▒█▄▄█ ", "▒█░▒█ ", "▒█▄▄█ ", "▒█░░▒█ ", "▒█░░▀█ ", "▒█▄▄▄█ ", "▒█░░░ ", "░▀▀█▄ ", "▒█░▒█ ", "▒█▄▄▄█ ", "░▒█░░ ", "░▀▄▄▀ ", "░░▀▄▀░ ", "▒█▄▀▄█ ", "▄▀▒▀▄ ", "░░▒█░░ ", "▒█▄▄▄█ ", "  "};

void printa(vector<string> &v, char c) {
    if (c == ' ') cout << v[26];
    else cout << v[c-'a'];
}
void prints(int len) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6*len; j++) {
            int star = rand()%4;
            if (star == 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

int main() {
    string input;
    getline(cin, input);
    for (int i = 0; i < input.length(); i++) {
        if (input[i]-'A' >= 0 && input[i]-'A' < 25)
            input[i] = input[i]-'A'+'a';
    }
    prints(input.length());
    for (char c : input) {
        printa(t, c);
    }
    cout << endl;
    for (char c : input) {
        printa(m, c);
    }
    cout << endl;
    for (char c : input) {
        printa(b, c);
    }
    cout << endl;
    prints(input.length());

    return 0;
}
