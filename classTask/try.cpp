#include<iostream>
using namespace std;
int area(int a,int b){
    int result;
    result =a*b;
    return result;
}
int main(){
    cout<<"The area of the rectangle is "<<area(5,2)<<endl;
    return 0;
}