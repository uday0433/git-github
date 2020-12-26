#include<iostream>
using namespace std;

class sample{
	private:
		int a;
		int b;
	public:
		void setValue(int x, int y){
			a = x;
			b = y;
		}
		
		friend int sum(sample);
};

int sum(sample s1){
	return (s1.a + s1.b);
}

int main(){
	sample s;
	s.setValue(4,5);
	
	cout<<"Sum = "<<sum(s);
	
	return 0;
}
