#include<iostream>
using namespace std;

class M{
	private:
		int a;
		int b;
	public:
		void setValue(int x, int y){
			a = x;
			b = y;
		}
		
		friend int sum(M m);
};

int sum(M m){
	int M::*i = &M::a;
	int M::*j = &M::b;
	
	M *x = &m;
	
	int s = m.*i + x->*j;
	return s;
}

int main(){
	M m1;
	
	void (M::*fun)(int, int) = &M::setValue;
	
	(m1.*fun)(4,5);
	cout<<"Sum : "<<sum(m1)<<endl;
	
	M *m2 = &m1;
	(m2->*fun)(2,2);
	cout<<"Sum : "<<sum(m1);
	return 0;
}
