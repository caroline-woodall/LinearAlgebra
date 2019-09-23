#ifndef Solver_h
#define Solver_h
#include "Matrix.h"

class Solver{
public:
    Solver(){}
    Matrix* getIdentityMatrix(Matrix *mat);
    Matrix* multiplyMatrices(Matrix *mat1, Matrix *mat2);
    Matrix* addMatrices(Matrix *mat1, Matrix *mat2);
};

#endif /* Solver_h */
