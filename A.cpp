#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define int long long

double dist(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1- x2, 2.0) + pow(y1 - y2, 2.0));
}

signed main() {
    int x1, y1, r, x2, y2, x3, y3;
    cin >> x1 >> y1 >> r >> x2 >> y2 >> x3 >> y3;

    if(x2 <= x1 - r && x1 + r <= x3 && y2 <= y1 - r && y1 + r<= x3) {
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

