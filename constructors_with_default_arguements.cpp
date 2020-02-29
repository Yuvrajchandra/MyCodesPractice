#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class complex
{
    double real_;
    double imaginary_;

public:
    complex(double real = 0.0, double imaginary= 0.0 ) : real_(real), imaginary_(imaginary){};

    double norm() { return sqrt(real_ * real_ + imaginary_ * imaginary_); }

    void print()
    {
        cout << "|" << real_ << "+j" << imaginary_ << "|=";
        cout << norm() << endl;
    }
};

int main()
{
    complex c(3.5, 5.2), d(2.6);

    c.print();
    d.print();

    return 0;
}