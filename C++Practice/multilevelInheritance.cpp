#include<iostream>
using namespace std;

class student{
	private:
		int roll_number;
	public:
		void get_number(int);
		void put_number(void);
};

void student::get_number(int a){
	roll_number = a;
}

void student::put_number(){
	cout<<"Roll number = "<<roll_number<<endl;
}

class test : public student{
	protected:
		int sub1;
		int sub2;
	public:
		void get_marks(int, int);
		void put_marks(void);
};

void test::get_marks(int a, int b){
	sub1 = a;
	sub2 = b;
}

void test::put_marks(){
	cout<<"Marks in sub1 = "<<sub1<<endl;
	cout<<"Marks in sub2 = "<<sub2<<endl;
}

class result : public test{
	private:
		int total;
	public:
		void display(void);
};

void result::display(){
	total = sub1 + sub2;
	put_number();
	put_marks();
	cout<<"Total = "<<total<<endl;
}

int main(){
	result s1;
	s1.get_number(1);
	s1.get_marks(77,88);
	s1.display();
	 
	return 0;
}
