#include <iostream>
#include <algorithm> 
using namespace std;


struct Rect {
    double x, y, w, h;
};

 Rect R1 = {1, 1, 5, 5};
 Rect R2 = {2, 2, 5, 5};

double overlap(Rect &R1, Rect &R2) {
    double x_start = max(R1.x, R2.x);
    double x_end = min(R1.x + R1.w, R2.x + R2.w);
    double x_overlap = max(0.0, x_end - x_start);

    double y_start = max(R1.y - R1.h, R2.y - R2.h);
    double y_end = min(R1.y, R2.y);
    double y_overlap = max(0.0, y_end - y_start);

    return x_overlap * y_overlap;
}

int main() {
    Rect R1 = {1, 1, 5, 5};
 Rect R2 = {2, 2, 5, 5};
   cout <<  overlap(R1, R2) ;
}