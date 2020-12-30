#include<iostream>
using namespace std;

template<class T>
void Swap(T &a, T &b)
{
	T temp;
	
	temp = a;
	a = b;
	b = temp;
}

void display(int m, int n, float c, float d){
	cout<<"m = "<<m<<" n = "<<n<<endl;
	Swap(m, n);
	cout<<"After swap m = "<<m<<" n = "<<n<<endl;
	
	cout<<"c = "<<c<<" d= "<<d<<endl;
	Swap(c, d);
	cout<<"After swap c = "<<c<<" d = "<<d<<endl;
	
}
int main()
{
	display(7, 8, 2.3, 4.1);
	return 0;
}
