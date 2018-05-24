#include <iostream>

using namespace std;

class Point{
    int x,y,z;

public:
    Point(int xg=0, int yg = 0, int zg=0){
        x=xg;
        y=yg;
        z=zg;
    }
    friend bool operator!(Point &cPoint);


};

    bool operator!(Point &cPoint){

        return (cPoint.x==0 && cPoint.y == 0 && cPoint.z == 0);
    }



int main (){

    Point cPoint;
    if(!cPoint){
        cout<<"Hi Bitches"<<endl;
    }


    return 0;
}