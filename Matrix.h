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
    Matrix(int x, int y);
    Matrix(){};
    bool rowSwap(int row1, int row2);
    bool multiplyRow(int row, int alpha);
    bool addRows(int toAddWith, int toAddTo);
    
    void printMatrix();
    ~Matrix(){};
};

#endif /* Matrix_h */
