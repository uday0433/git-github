#include<iostream>
using namespace std;

class complex{
	private:
		float x;
		float y;
	public:
		complex(){
		
		}
		
		complex(float real, float img){
			x = real;
			y = img;
		}
		
		complex operator+(complex);
		void display(void);	
		
};

void complex::display(){
	cout<<x<<"+j"<<y<<endl;
}

complex complex::operator+(complex a){
	complex temp;
	temp.x = x + a.x;
	temp.y = y + a.y;
	return temp;
}

int main(){
	complex c1, c2, c3;
	c1 = complex(2, 4);
	c2 = complex(3, 5);
	
	c3 = c1 + c2;
	
	cout<<"c1 = ";c1.display();
	cout<<"c2 = ";c2.display();
	cout<<"c3 = ";c3.display();
	
	
	return 0;
}
