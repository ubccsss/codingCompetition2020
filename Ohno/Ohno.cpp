#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double r, d;
    int n;
    cin >> r >> d >> n;

    int count = 0; // count of crust sausages

    for (int i = 0; i < n; i++) {
        double sausage_x, sausage_y, sausage_r;
        cin >> sausage_x >> sausage_y >> sausage_r;

        // sausage cannot fit completely on crust
        if (sausage_r * 2 > d) continue;

        // distance from sausage origin to pizza origin
        double sausage_dist = sqrt(sausage_x * sausage_x + sausage_y * sausage_y);

        // closest that sausage origin can be to pizza origin
        double closest_crust_dist = (r - d) + sausage_r;

        // farthest that sausage origin can be to pizza origin
        double farthest_crust_dist = r - sausage_r;

        // add to count if sausage doesn't exceed either bound
        if ((sausage_dist >= closest_crust_dist) && (sausage_dist <= farthest_crust_dist))
            count++;
    }
    cout << count << endl;
    return 0;
}
