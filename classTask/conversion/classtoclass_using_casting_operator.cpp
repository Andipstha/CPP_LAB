#include<iostream>
using namespace std;
class Rectangle{
    int width,length,area;
    public:
        Rectangle( int w,int l) {
                width=w;
                length=l;
                area=width*length;
        }
        void output(){
            cout<<"Length"<<length<<endl;
            cout<<"Width"<<width<<endl;
            cout<<"Area"<<area<<endl;
        }
};
class Triangle{
    int base,height;
    float area;
    public:
        Triangle(int b,int h){
            base=b;
            height=h;
            area=0.5*base*height;
        }
        void print(){
            cout<<"Base"<<base<<endl;
            cout<<"Height"<<height<<endl;
            cout<<"Area"<<area<<endl;
        }
        operator Rectangle(){
            Rectangle temp(base,height);
            return temp;
        }
};
int main(){
    Triangle t(10,20);
    Rectangle r=t; // triangle to rectangle.
    t.print();
    r.output();
    return 0;
}