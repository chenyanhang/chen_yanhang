#include "matrix.h"

using namespace std;

ostream &operator<<(ostream &output, const  matrix &number)
{
    output<<number.a<<"   "<<number.b<<"   "<<number.c<<"\n"<<number.d<<"   "<<number.e<<"   "<<number.f<<"\n"<<number.g<<"   "<<number.h<<"   "<<number.i;
    return output;
}
istream &operator>>(istream &input, matrix &number)
{
    input>>number.a>>number.b>>number.c>>number.d>>number.e>>number.f>>number.g>>number.h>>number.i;
    return input;
}
matrixjia &operator+(matrixjia &qian,   matrix &hou)
{
    matrixjia sum;
    sum.a=qian.a+hou.a;
    sum.b=qian.b+hou.b;
    sum.c=qian.c+hou.c;
    sum.d=qian.d+hou.d;
    sum.e=qian.e+hou.e;
    sum.f=qian.f+hou.f;
    sum.g=qian.g+hou.g;
    sum.h=qian.h+hou.h;
    sum.i=qian.i+hou.i;
    return sum;
}
