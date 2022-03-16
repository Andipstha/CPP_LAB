//WAP to find the largest number of two class using friend function
#include<iostream>
using namespace std;
class X
{
	private:
		int x;
	public:
		void input()
		{
			cout<<"Enter the value of x : ";
			cin>>x;	
		}	
		void find(Test t) 
		{
		   if (t.x > t1.y) {
		       cout << "Largest is:" << t.x;
		   } else {
		       cout << "Largest is:" << t1.y;
  		 }
		
};
class Y
{
	private:
		int y;
	public:
		void input()
		{
			cout<<"Enter the value of y ";
			cin>>y;	
		}
};
#include<iostream>
using namespace std;

class Test {
private:
   int x, y;
public:

   void input() {
       cout << "Enter two numbers:";
       cin >> x>>y;
   }

   friend void find(Test t);
};

void find(Test t) {
   if (t.x > t.y) {
       cout << "Largest is:" << t.x;
   } else {
       cout << "Largest is:" << t.y;
   }
}

int main() {

   Test t;
   t.input();
   find(t);

   return 0;
}
