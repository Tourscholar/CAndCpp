#include <iostream>
using namespace std;
#define MAXSIZE 100

/**
 * C++三元组实现稀疏矩阵
 */

class SparseMartix;
class MatrixTerm{
    friend class SparseMatrix;
    private:
        // 非零项的行，列，值
        int row, col, value;
};

class SparseMatrix{
    private:
        // 行数，列数，非零元素的个数
        int rows, cols, terms;
        // 存非零元素的三元组
        MatrixTerm * smArry;
        // 三元组最大可容纳的元素个数
        int  capacity;
    public:
        SparseMatrix(int maxSz = MAXSIZE);
        SparseMatrix Transpose();
};

SparseMatrix SparseMatrix::Transpose(){
    int * rowSize = new int[cols];
    int * rowStart = new int[cols];
    SparseMatrix b(capacity);
    b.rows = rows;
    b.cols = cols;
    b.terms = terms;
    b.capacity = b.capacity;
    if(terms > 0){
        int i, j, CurrentB = 0;
        for(i = 0; i < cols; i++)
            rowSize[i] = 0;
        for(i = 0; i < terms; i++)
            rowSize[smArry[i].col]++;
        rowStart[0] = 0;
        for(i = 1; i < b.rows; i++)
            rowStart[i] = rowStart[i-1] + rowSize[i-1];
        for(i = 0; i < terms; i++){
            j = rowStart[smArry[i].col];
            b.smArry[j].row = smArry[i].col;
            b.smArry[j].col = smArry[i].row;
            b.smArry[j].value = smArry[i].value;
            rowStart[smArry[i].col]++;
        }
    }
    delete [] rowSize;
    delete [] rowStart;
    return b;
}