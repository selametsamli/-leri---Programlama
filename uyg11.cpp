#include <iostream>

using namespace std; 

class Dikdortgen {

    int en,boy;
public:
    Dikdortgen(){
        en = 5;
        boy = 3;
    }
    Dikdortgen(int gEn, int gBoy){
        en = gEn;
        boy = gBoy;
    }

    int getEn(){
        return en;
    }
    int getBoy(){
        return boy;
    }

};

int main (){

    Dikdortgen d1;
    Dikdortgen d2(5,12);

    cout<<d1.getEn()<<" "<<d1.getBoy()<<endl;
    cout<<d2.getEn()<<" "<<d2.getBoy()<<endl;

    return 0;
}