#include <iostream>

using namespace std;

class Cents{

    int value;
public:

    Cents(int v){value = v;}
    
    int getCents(){
        return value;
    }

    friend Cents operator+(const Cents &c1, const Cents &c2);

};

    Cents operator+(const Cents &c1, const Cents &c2){
        return Cents(c1.value+c2.value);
    }


int main(){

    Cents cCents1(6);
    Cents cCents2(8);
    Cents cCentsSum = cCents1 + cCents2;

    cout << cCentsSum.getCents()<<endl;


    return 0;
}