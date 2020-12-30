#include<iostream>
using namespace std;

class space{
	private:
		int x;
		int y;
		int z;
	public:
		void getData(int a, int b, int c);
		void display(void);
		void operator-();
};

void space::getData(int a, int b, int c){
			x = a;
			y = b;
			z = c;
}

void space::display(void){
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
}

void space::operator-(){
	x = -x;
	y = -y;
	z = -z;
}

int main(){
	space s;
	s.getData(2,3,4);
	s.display();
	cout<<"After overload:"<<endl;
	//s.operator-();
	-s;
	s.display();
	
	return 0;
}
