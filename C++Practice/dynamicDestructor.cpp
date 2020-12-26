#include<iostream>
using namespace std;

class test{
	private:
		int *a;
	public:
		test(int size){
			a = new int[size];
			cout<<"Constructor created"<<endl;
		}
		
		~test(){
			delete a;
			cout<<"Constructor destroyed"<<endl;
		}
};

int main(){
	int size;
	cout<<"Enter size";
	cin>>size;
	
	cout<<"Inside Main block"<<endl;
	test t1(size);
	
	return 0;
}
