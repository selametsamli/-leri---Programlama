#include <iostream>
using namespace std;


class Digit{
  int digit;
public:
    Digit(int gDigit=0){digit = gDigit;}

    Digit operator ++(int);
    Digit operator --(int);
    int getDigit() const {return digit;}

};

Digit Digit::operator++(int){
    Digit cResult(digit);
    ++(*this);
    return cResult;
}

Digit Digit::operator--(int){
    Digit cResult(digit);
    --(*this);
    return cResult;
}

int main(){

    Digit cDigit(5);
    ++cDigit;
    cDigit++;


    return 0;
}