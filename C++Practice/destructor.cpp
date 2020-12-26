#include<iostream>
using namespace std;

int count = 0;

class test{
	public:
		test(){
			count++;
			cout<<"constructor created "<<count<<endl;
		}
		
		~test(){
			cout<<"constructor destroyed "<<count<<endl;
			count--;
		}
};

int main(){
	
	cout<<"Main Block"<<endl;
	test t1;
	{
		cout<<"Inside Block1"<<endl;
		test t2;
	}
	
	
	return 0;
}
