#include "../include/Matrix.h" 

Matrix::Matrix(){}
Matrix::~Matrix() {}

void Matrix::addRow(const std::vector<double> &row) {
    mMatrix.push_back(row);
}





