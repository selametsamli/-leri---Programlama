#include <iostream>

using namespace std;


class Point{

    double x,y,z;
public:
    Point(double gx, double gy, double gz){
        x = gx;
        y = gy;
        z = gz;
    }

    double getX(){return x;}
    double getY(){return y;}
    double getZ(){return z;}

    friend ostream& operator<<(ostream &out, Point &cPoint);

};

    ostream& operator<<(ostream &out,Point &cPoint){

        out<<"("<<cPoint.x<<","<<cPoint.y<<","<<cPoint.z<<")";
        return out;
    }

int main(){

    Point cPoint1(2.0,3.0,4.0);
    Point cPoint2(6.0,7.0,8.0);
    cout<<cPoint1<<" "<<cPoint2<<endl;

    return 0;
}