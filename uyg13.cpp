#include <iostream>

using namespace std;


class Hesapla {

    int deger;

public:
    Hesapla(){
        deger=0;
    }

    Hesapla& Ekle(int gDeger){deger+=gDeger;return *this;}
    Hesapla& Cikar(int gDeger){deger-=gDeger;return *this;}
    Hesapla& Carp(int gDeger){deger*=gDeger;return *this;}


    int getDeger(){return deger;}

};

int main(){

    Hesapla hesap;
    hesap.Ekle(5).Cikar(3).Carp(4);
    cout<<hesap.getDeger()<<endl;
    return 0;
}