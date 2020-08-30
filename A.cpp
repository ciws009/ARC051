#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define int long long

double dist(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1- x2, 2) + pow(y1 - y2, 2));
}

signed main() {
    double x1, y1, r, x2, y2, x3, y3;
    cin >> x1 >> y1 >> r >> x2 >> y2 >> x3 >> y3;

    if(x2 <= x1 - r && x1 + r <= x3 && y2 <= y1 - r && y1 + r<= y3) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    if(dist(x1, y1, x2, y2) <= r && dist(x1, y1, x3, y2) <= r && dist(x1, y1, x2, y3) <= r && dist(x1, y1, x3, y3) <= r) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    
    return 0;
}

