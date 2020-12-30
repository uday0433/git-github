#include<iostream>
using namespace std;

//funtion with two generic arg
template<class T1, class T2>
void display(T1 a, T2 b){
	cout<<"a = "<<a<<" b = "<<b<<endl;
}

int main(){
	
	display(3,55.3);
	display(23, "HI");
	
	return 0;
}
