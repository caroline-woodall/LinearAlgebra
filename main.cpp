#include <iostream>
using namespace std;
#include "Matrix.h"
#include "Solver.h"
#include <vector>

int main(int argc, const char * argv[]) {
    int n;
    int m;
    
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter m: ";
    cin>>m;
    
    Matrix *mat = new Matrix(n,m);
    Solver *solve = new Solver();
    
    for(int i = 0; i < n; ++i){
        cout<<"Enter row "<<i<<": \n";
        int tempInt;
        for(int j = 0; j < m; ++j){
            cin>>tempInt;
            mat->rowList.at(j).push_back(tempInt);
        }
    }
    
    mat->printMatrix();
    if(mat->rowSwap(0, 1)){
        cout<<"Swap Rows\n";
        mat->printMatrix();
    }
    
    cout<<"Identity Matrix\n";
    Matrix *identity = solve->getIdentityMatrix(mat);
    identity->printMatrix();
    
    delete mat;
    return 0;
}
