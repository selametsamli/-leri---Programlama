#include <iostream>

using namespace std;


class Point{
    double x,y,z;
public:
    Point(double gx=0.0, double gy=0.0 ,double gz=0.0){
        x = gx;
        y = gy;
        z = gz;
    }

    double getX(){return x;}
    double getY(){return y;}
    double getZ(){return z;}

    friend istream& operator>>(istream &in , Point &cPoint);

};

    istream& operator>>(istream &in , Point &cPoint){
        in >> cPoint.x;
        in >> cPoint.y;
        in >> cPoint.z;
        return in;
    }



int main(){

    Point cPoint1,cPoint2;

    cin>>cPoint1;

    cout<<cPoint1.getX()<<endl;



    return 0;
}