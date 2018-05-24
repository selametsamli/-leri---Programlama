#include <iostream>

using namespace std;

class Cents{

    int value;

public:
    Cents(int v){
        value = v;
    }
    int getValue(){return value;}

};

Cents Add(Cents &cCents1, Cents &cCents2){
    return  Cents(cCents1.getValue()+cCents2.getValue());
}

int main(){

    Cents cCents1(6);
    Cents cCents2(8);
    cout<<Add(cCents1,cCents2).getValue()<<endl;


    return 0;
}