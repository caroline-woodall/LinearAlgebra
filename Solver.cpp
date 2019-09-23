#include "Solver.h"

Matrix* Solver::getIdentityMatrix(Matrix *mat){
    Matrix *identity = new Matrix(mat->n, mat->m);
    for(int i = 0; i < mat->m; ++i){
        for(int j = 0; j < i; ++j){
            identity->rowList.at(i).push_back(0);
        }
        identity->rowList.at(i).push_back(1);
        for(int j = 1; j < mat->n; ++j){
            identity->rowList.at(i).push_back(0);
        }
    }
    return identity;
}
