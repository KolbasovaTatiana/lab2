#include <iostream>
#include <math.h>

double long dv_fact(double long n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * dv_fact(n - 2);    
}
long double t(long double x) {
   long double chisl = 0, znam = 0;
   int k = 0;
   while (k <= 10) {
    chisl += (pow(x, 2*k + 1) / dv_fact(2*k + 1));
    znam += (pow(x, 2*k) / dv_fact(2*k));
    k += 1;
   }
   return chisl / znam;
}

int main() {
    long double y, otv;
    std::cin >> y;
    otv = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(y*y - 1));
    std::cout << otv;
    return 0;
}