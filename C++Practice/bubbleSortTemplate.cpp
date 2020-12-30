#include<iostream>
using namespace std;

template<class T>
void bubble(T a[], int n){
	for(int i = 0; i < n-1; i++)
	{
		for(int j = n-1; i<j; j--)
		{
			if(a[j] < a[j - 1])
				swap(a[j], a[j-1]);
		}
	}
}

template<class X>
void Swap(X &a, X &b){
	X temp;
	
	temp = a;
	a = b;
	b = temp;
}

int main(){
	int x[5]={3,6,1,7,4};
	float y[5]={1.4,4.1,6.2,1.1, 5.3};
	
	bubble(x, 5);
	bubble(y, 5);
	
	cout<<"After sort x: "<<endl;
	for(int i = 0; i < 5; i++){
		cout<<x[i]<<endl;
		//cout<<"y =  "<<y[i]<<endl;
	}
	
	cout<<"After sort y: "<<endl;
	for(int i = 0; i < 5; i++){
		cout<<y[i]<<endl;
	}
	
	return 0;
}

