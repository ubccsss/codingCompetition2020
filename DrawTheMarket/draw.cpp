#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>


using namespace std;
vector<vector<char>> pizza;
int width = 100, height = 100;
int center_x = 50, center_y = 50;

double dist(int x, int y) {
    int dx = x - center_x;
    int dy = y - center_y;
    return sqrt(3*(dx*dx) + dy*dy);
}

void drawOutline(double radius, char c, int prob) {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (abs(dist(x, y) - radius) < 1 && rand() % prob == 0) pizza[x][y] = c;
        }
    }
}

void drawPepperoni(int x, int y) {
    for (int i = x-2; i <= x+2; i++) {
        for (int j = y-2; j <= y+2; j++) {
            if (abs(x-i)+abs(y-j) < 3) pizza[i][j] = '+';
        }
    }
}

void drawMushroom(int x, int y) {
    pizza[x][y] = '(';
    pizza[x-1][y+1] = '_';
    pizza[x-1][y+2] = '_';
    pizza[x-1][y+3] = '_';
    pizza[x-1][y+4] = '_';
    pizza[x][y+5] = ')';
    pizza[x+1][y+2] = '/';
    pizza[x+1][y+3] = '_';
    pizza[x+1][y+4] = '\\';
}

int main() {
    pizza = vector<vector<char>>(height, vector<char>(width, ' '));
    int rad = 30;
    // crust
    drawOutline(rad + 10, 'X', 1);
    for (int i = 38; i >= 32; i-= 2) {
        drawOutline(i, '.', 5);
    }
    drawOutline(rad, '*', 1);
    for (int i = rad; i > 0; i--) {
        drawOutline(i, '~', 10);
    }

    for (int i = 0; i < 100; i++) {
        int x = rand()%width;
        int y = rand()%height;
        cout << x << " " << y << endl;
        if (dist(x, y) < rad) {
            drawPepperoni(x, y);
        }
    }

    for (int i = 0; i < 100; i++) {
        int x = rand()%width-6;
        int y = rand()%height-6;
        cout << x << " " << y << endl;
        if (dist(x, y) < rad) {
            drawMushroom(x, y);
        }
    }

    for (vector<char> &v : pizza) {
        for (char c : v) {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
