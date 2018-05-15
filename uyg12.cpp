#include <iostream>

using namespace std;

class Simple {

    int ID;


public:
    Simple(int id){
        setID(id);
    }


    void setID (int id ){
        this->ID = id;
    }
    int getID(){

        return this->ID;
    }

};


int main(){
    Simple n1(5);
    cout<<n1.getID()<<endl;


    return 0;
}

