#include<iostream>
using namespace std;
class x{
    public:
        int a,b;
    public:
        inline int sum(int x,int y){
        return x+y;
    }
};
int main(){
    x obj;
    int c,d;
    cout<<"Enter the numbers.\n";
    cin>>c>>d;
    obj.a=c;
    obj.b=d;
    obj.sum(c,d);
    cout<<"the sum is:-"<<obj.sum(obj.a,obj.b);
    return 0;
    
    
}