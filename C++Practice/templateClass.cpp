#include<iostream>
using namespace std;

class vector{
	int *v;
	int size;
	public:
		vector(int m){
			size = m;
			v = new int[size];
			for(int i = 0; i <size; i++)
				v[i] = 0;
		}
	    
	    vector(int *a){
		for(int i = 0; i <size; i++)
				v[i] = a[i];	
		}
		
    	int operator*(vector &y){
			int sum = 0;
			for(int i = 0; i < size; i++)
				sum = sum + this->v[i] * y.v[i];
			return sum;
		}
		
		void operator=(int *a){
			for(int i = 0; i < size; i++)
				this->v[i]=a[i]; 		
		}
	
};


int main(){
	int x[3] = {2,2,2};
	int b[3] = {2,2,2};
	vector v1(3);
	vector v2(3);
	
	v1 = x;
	v2 = b;
	
	int result = v1 * v2;
	cout<<"result = "<<result;
	return 0; 
}
