#include<iostream>
using namespace std;

class base{
	public:
		virtual void display(){
			cout<<"display base"<<endl;
		}
		virtual void show(){
			cout<<"show base"<<endl;
		}
};

class derive : public base{
	public:
		void display(){
			cout<<"display derive"<<endl;
		}
		void show(){
			cout<<"show derive"<<endl;
		}
};

int main(){
	base *bp = new derive();
	bp->display();
	bp->show();
	return 0;
}
