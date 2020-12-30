#include<iostream>
using namespace std;

typedef void (*funptr)(int, int);


void add(int i, int j){
	cout<<"i + j ="<<i+j;
}

void subtract(int i, int j){
	cout<<"i - j ="<<i-j;
}

int main(){
	funptr ptr;
	ptr = &add;
	ptr(3,2);
	ptr = &subtract;
	ptr(5,2);
	
	return 0;
}
