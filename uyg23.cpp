#include <iostream>
#include <cassert>

using namespace std;

class IntList{

  int  anList[10];
public:
    int& operator[](const int index);

};

int& IntList::operator[](const int index){
    assert(index>=0 && index<10);
    return anList[index];
}

int main(){

    int anArray[5];
    anArray[7]=3;

}