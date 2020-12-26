#include<iostream>
using namespace std;

class point{
	private:
		int a;
		int b;
	public:
		point(int x, int y)
		{
			a = x;
			b = y;
		}
		
		void display(){
			cout<<"a = "<<a<<" b = "<<b;
		}
};

int main(){
	point p1(2,3);
	p1.display();
	
	return 0;
}

