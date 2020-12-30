#include<iostream>
using namespace std;

template<class T1 = int, class T2 = int> //default data type 
class test{
	T1 a;
	T2 b;
	public:
		test(T1 x, T2 y){
			a = x;
			b = y;
		}
		
		void show(void){
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
};

int main(){
	test<int, int> t1(3,5);
	test<float, int> t2(4.3, 2);
	
	test<> t3(3.4,3);
	
	t1.show();
	t2.show();
	t3.show();
	return 0;
}
