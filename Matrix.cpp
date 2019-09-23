#include <stdio.h>
#include "Matrix.h"

Matrix::Matrix(int x, int y){
    n = x;
    m = y;
    for(int i = 0; i < m; ++i){
        vector<int> temp;
        rowList.push_back(temp);
    }
}

bool Matrix::rowSwap(int row1, int row2){
    if(row1 >= rowList.size() || row2 >= rowList.size()){
        return false;
    }
    vector<int> temp;
    temp.assign(rowList.at(row1).begin(), rowList.at(row1).end());
    rowList.at(row1).assign(rowList.at(row2).begin(),rowList.at(row2).end());
    rowList.at(row2).assign(temp.begin(), temp.end());
    return true;
}

bool Matrix::multiplyRow(int row, int alpha){
    for(int j = 0; j < rowList.at(row).size(); ++j){
        rowList.at(row).at(j) = rowList.at(row).at(j) * alpha;
    }
    return true;
}

bool Matrix::addRows(int toAddWith, int toAddTo){
    if(rowList.at(toAddTo).size() != rowList.at(toAddWith).size()){
        return false;
    }
    for(int j = 0; j < rowList.at(toAddTo).size(); ++j){
        rowList.at(toAddTo).at(j) = rowList.at(toAddTo).at(j) + rowList.at(toAddWith).at(j);
    }
    return true;
}

void Matrix::printMatrix(){
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            cout<<rowList.at(i).at(j)<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
}
