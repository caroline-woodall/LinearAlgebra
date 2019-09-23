#ifndef Solver_h
#define Solver_h
#include "Matrix.h"

class Solver{
public:
    Matrix mat;
    Solver(Matrix x){
        mat = x;
    }
};

#endif /* Solver_h */
