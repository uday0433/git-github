#include<iostream>
using namespace std;

class base{
	public:
		virtual void display() = 0;
		
};

class derive : public base {
	public:
		void display(){
			cout<<"derive display";
		}
};

int main(){
	//base b; cannot create object of base
	base *bp = new derive();
	
	bp->display();
	return 0;
}
