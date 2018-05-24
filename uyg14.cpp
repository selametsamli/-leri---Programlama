#include <iostream>
using namespace std;

class Something{

    int m_nValue;
public:
    Something(){}
    const int& GetValue()const{
        return m_nValue;
    }

    int& GetValue(){
        
        return m_nValue;
    }


};

int main() {

    Something n1;
    n1.GetValue(); //non-const GetValue();

    const Something n2;
    n1.GetValue(); //const GetValue();

    return 0;
}