#include <iostream>
#include "sqrt.h"

using namespace std;

int main(int argc, char *argv[]) {
    Sqrt s;
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " <number>" << endl;
        return 1;
    }
    double* i = (double*) malloc(sizeof(double));
    *i = atoi(argv[1]);

    double* j = (double*) malloc(sizeof(double));
    *j = s.findSqrt(*i);

    cout << "The square root of " << *i << " is " << *j << endl;

    free(i);
    free(j);

    return 0;
} 