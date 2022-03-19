//2. WAP a cpp program to add two time object showing the example of passing object function. (2012.Q7)
#include<iostream>
using namespace std;
class X{
        int hr;
        int min;
    public:
        X getData(){
           
            cout<<"Enter the hour >23hrs."<<endl;
            cin>>hr;
            cout<<"Enter the minutes >59min."<<endl;
            cin>>min;
            return X;
        }
        void add(const X &obj, const X&obj1){
            int a,b,c;
            a= obj.hr+obj1.hr;
            b=obj.min+obj1.min;
            /*if(b==60){
                b=0;
                a++;
            }
            else(
                c++; 
            )
            if(a==24){
                a=0;
            }
            else{
                c++;
            }*/
            cout<<"The sum of "<<a<<":"<<b;
           

        }

};
int main(){
    X obj,obj1,sum;
    obj=obj.getData();
    obj1=obj1.getData();
    sum.add(obj,obj1);


}