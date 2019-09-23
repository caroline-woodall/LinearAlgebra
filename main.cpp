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
    
    for(int i = 0; i < n; ++i){
        cout<<"Enter row "<<i<<": \n";
        vector<int> temp;
        int tempInt;
        for(int j = 0; j < m; ++j){
            cin>>tempInt;
            temp.push_back(tempInt);
        }
        mat->rowList.push_back(temp);
        temp.clear();
    }
    mat->printMatrix();
    cout<<"Swap Rows\n";
    mat->rowSwap(0, 1);
    mat->printMatrix();
    delete mat;
    return 0;
}
