#include<iostream>
using namespace std;
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
            cout<<"Details Triangle::"<<endl;
            cout<<"Base"<<base<<endl;
            cout<<"Height"<<height<<endl;
            cout<<"Area"<<area<<endl;
        }
        int getBase(){
            return base;
        }
        int getHeight(){
            return height;
        }
};
class Rectangle{
    int width,length,area;
    public:
        Rectangle( int w,int l) {
                width=w;
                length=l;
                area=width*length;
        }
        void output(){
            cout<<"Details Rectangle::"<<endl;
            cout<<"Length"<<length<<endl;
            cout<<"Width"<<width<<endl;
            cout<<"Area"<<area<<endl;
        }
        Rectangle(Triangle t){
            width=t.getBase();
            length=t.getHeight();
            area=width*length;
        }
};
int main(){
    Triangle t (10,20);
    Rectangle r=t;//Rectangle(b);
    t.print();
    r.output();
    return 0;
}