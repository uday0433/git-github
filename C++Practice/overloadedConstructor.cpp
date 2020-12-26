#include<iostream>
using namespace std;

class complex{
	private:
		int x, y;
	public:
		complex(){ }
		complex(int a){
			x = y = a;
		}
		
		complex(int real, int img){
			x = real;
			y = img;
		}
		
		friend complex sum(complex, complex);
		friend void show(complex);
};

complex sum(complex c1, complex c2){
	complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return c3;
}

void show(complex c){
	cout<<c.x<<" + i"<<c.y<<endl;
}

int main(){
	complex A(2,3);
	complex B(4,6);
	complex C;
	
	C = sum(A, B);
	
	cout<<"A = ";show(A);
	cout<<"B = ";show(B);
	cout<<"sum = ";show(C);
	
	return 0;
	
}
