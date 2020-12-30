#include<iostream>
using namespace std;

template<class T1, class T2>
class test{
	T1 a;
	T2 b;
	public:
		test(T1 x, T2 y){
			a = x;
			b = y;
		}
		
		void show(void){
			cout<<"a = "<<a<<" b = "<<b;
		}
};

int main(){
	test<int, int> t1(3,4);
	test<float, float> t2(2.9,5.2);
	
	t1.show();
	t2.show();
	return 0;
}
