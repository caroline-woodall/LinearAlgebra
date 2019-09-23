#ifndef Matrix_h
#define Matrix_h
#include <iostream>
#include <vector>
using namespace std;

class Matrix{
public:
    int n;
    int m;
    vector<vector<int>> rowList;
    Matrix(int x, int y){
        n = x;
        m = y;
    }
    Matrix(){};
    bool rowSwap(int row1, int row2);
    void printMatrix();
    ~Matrix(){};
};

#endif /* Matrix_h */
