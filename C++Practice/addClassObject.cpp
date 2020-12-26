#include<iostream>
using namespace std;

class test;

class sample{
	private:
		int data;
	public:
		void setValue(int a){
			data = a;
		}	
		
	friend void add(sample, test);
};

class test{
	private:
		int data;
	public:
		void setValue(int a)
		{
			data = a;
		}
		
	friend void add(sample, test);
};

void add(sample s1, test t1)
{
	cout<<"Sum: "<<s1.data + t1.data;
}

int main(){
	sample s;
	test t;
	s.setValue(5);
	t.setValue(6);
	
	add(s,t);
	
	return 0;
}
