#include<iostream>
using namespace std;
class X{
      public:
        string commom;
          string name;
            string caste;
      public:
        void getData(){
            cout<<"Enter the name :-"<<endl;
            getline(cin,name);
            cout<<"Enter the last name :-"<<endl;
            getline(cin,caste);
        }
       int display(const X& obj){ //X operator ++(const X& obj){
            commom = obj.name + /t obj.caste;
            cout<<"The combined form is :-"<<commom<<endl;
            return 0;
        }
};
int main(){
    X obj1;
    obj1.getData();
    int x =obj1.display(obj1);
    return 0;
}  
      
