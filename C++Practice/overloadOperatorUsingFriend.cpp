#include<iostream>
using namespace std;

const int size = 3;

class vector{
	private:
		int v[size];
	public:
		vector();
		vector(int *x);
		friend vector operator*(int a, vector b);
		friend vector operator*(vector b, int a);
		friend istream &operator>>(istream &, vector &);
		friend ostream &operator<<(ostream &, vector &);
};

vector::vector(){
	for(int i = 0; i < size; i++)
	{
		v[i] = 0;
	}
}

vector::vector(int *x){
	for(int i = 0; i < size; i++)
	{
		v[i] = x[i];
	}	
}

vector operator*(int a, vector b){
	vector c;
	for(int i = 0; i < size; i++)
	{
		c.v[i] = a * b.v[i];
	}
	return c;
}

vector operator*(vector b, int a){
	vector c;
	for(int i = 0; i < size; i++)
	{
		c.v[i] = b.v[i] * a;
	}
	return c;
}

istream &operator>>(istream &din, vector &b){
	for(int i = 0; i < size; i++)
	{
		din>>b.v[i];
	}
	return din;
}

ostream &operator<<(ostream &dout, vector &b){
	for(int i = 0; i < size; i++)
	{
		dout<<" "<<b.v[i];
	}
	return dout;
}

int x[size] = {2,3,4};

int main(){
	vector m;
	vector n = x;
	
	cout<<"Enter element of vector:"<<endl;
	cin>>m;
	cout<<"m = "<<m<<endl;
	
	vector p,q;
	p = 2 * m;
	q = n * 3;
	
	cout<<"p = "<<p<<endl;
	cout<<"q = "<<q<<endl;
	
	return 0;
}
