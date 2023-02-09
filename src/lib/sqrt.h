#include <iostream>
using namespace std;

class Sqrt {
    public:
        double findSqrt(double x)
        {
            if (x < 2)
                return x;

            double y = x;
            double z = (y + (x / y)) / 2;

            while (abs(y - z) >= 0.00001) {
                y = z;
                z = (y + (x / y)) / 2;
            }
            return z;
        }
};