#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>


class matrix
{
    friend std::ostream &operator<<(std::ostream &, const matrix &);
    friend std::istream &operator>>(std::istream &,  matrix &);
    friend std::matrixjia &operator+(std::matrixjia &,  matrix &);

    private:
        int a,b,c,d,e,f,g,h,i;
};

#endif // MATRIX_H
