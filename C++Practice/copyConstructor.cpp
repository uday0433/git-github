#include<iostream>
using namespace std;

class code{
	private:
		int id;
	public:
		code(){ }
		
		code(int a){
			id = a;
		}
		
		code(code &x){
			id = x.id;
		}
		
		void display(){
			cout<<"id = "<<id<<endl;
		}
};

int main(){
	code c1(10);
	code c2(c1);
	
	c1.display();
	c2.display();
	
	code c3 = c1;
	c3.display();
	
	code c4;
	c4 = c1;
	c4.display();
	
	return 0;
}
