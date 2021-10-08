#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

class Matrix
{
    public:
        Matrix();
        virtual ~Matrix();

        void addRow(const std::vector<double> &row);
        std::vector<std::vector<double>> scale(double scalar);

    protected:

    private:
    std::vector<std::vector<double>> mMatrix;
};

#endif // MATRIX_H