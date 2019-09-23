#include <stdio.h>
#include "Matrix.h"

bool Matrix::rowSwap(int row1, int row2){
    vector<int> temp;
    temp.assign(rowList.at(row1).begin(), rowList.at(row1).end());
    rowList.at(row1).assign(rowList.at(row2).begin(),rowList.at(row2).end());
    rowList.at(row2).assign(temp.begin(), temp.end());
    return true;
}

void Matrix::printMatrix(){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout<<rowList.at(i).at(j)<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
}
