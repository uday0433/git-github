#include<iostream>
using namespace std;

template <class T>
void display(T x){
	cout<<"overloaded display 1: "<<x<<endl;
}

template<class T1, class T2>
void display(T1 x, T2 y){
	cout<<"overloaded display 2: "<<x<<" "<<y<<endl;
}

void display(int a)
{
	cout<<"normal display:  "<<a<<endl;
}

int main(){
	display(100);
	display(3.2,2);
	display(7.8);
}
