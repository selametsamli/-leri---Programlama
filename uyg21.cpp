#include <iostream>

using namespace std;

class Digit{

    int digit;
public:
    Digit(int gDigit =0){digit = gDigit;}
    Digit& operator++();
    Digit& operator--();

    int getDigit()const{return digit;}

};
    Digit& Digit::operator++(){
        if(digit==9)
            digit=0;
        else
            ++digit;
        return *this;
    }

    Digit& Digit::operator--(){
        if(digit==0)
            digit=9;
        else
            --digit;
        return *this;
    }

int main(){

    Digit d;
    cout<<(++++++d).getDigit()<<endl;;
    cout<<(------d).getDigit()<<endl;

    return 0;
}