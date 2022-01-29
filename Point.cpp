#include <iostream>
using namespace std;
class Point2d{
    public:
    int x,y;
    public:
    Point2d(int x,int y);
    ~Point2d(){
        cout<<"\t\tPoint2d supprimé\n";
    }
};

Point2d::Point2d(int x,int y){
    x=x;y=y;
}

class Point3d:private Point2d{
    public:int z;
    Point3d(int a,int b,int c):Point2d(a,b){
        z=c;
    }
    ~Point3d(){
        cout<<"\t\tPoint3d supprimé\n";
    }
};
class Point4d : public Point3d {

};
int main(){
    Point2d *A=new Point2d(2,3);
    Point3d *B=new Point3d(1,5,6);
    delete A;
    delete B;
    return 0;
}