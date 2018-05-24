#include <iostream>

using namespace std;


class Storage{
    int m_nValue;
    double m_dValue;

public:
    Storage(int nValue,double dValue){
        m_dValue = dValue;
        m_nValue = nValue;
    }

    friend class Display;
};

class Display{
public:

    Display(){}
    void DisplayItem(Storage &cStorage){
        cout<<cStorage.m_nValue<<cStorage.m_dValue<<endl;
    }

};
int main(){

    Storage cStorage(5,6.5);
    Display cDisplay;

    cDisplay.DisplayItem(cStorage);


    return 0;
}