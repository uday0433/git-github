#include<iostream>
using namespace std;

class matrix{
	private:
		int **p;
		int d1, d2;
	public:
		matrix(int x, int y);
		
		void setElement(int i, int j, int value){
			p[i][j] = value;
		}
		
		int &getElement(int i, int j){
			return p[i][j];
		}
};

matrix::matrix(int x, int y){
	d1 = x;
	d2 = y;
	
	p = new int *[d1]; //array pointer
	
	for(int i = 0; i< d1; i++){
		p[i] = new int[d2]; //create space for each row
	}
}

int main(){
	int m ,n;
	int i, j, value;
	
	cout<<"Enter Matrix size: ";
	cin>>m>>n;
	
	matrix A(m,n);
	
	cout<<"Enter Element: ";
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			cin>>value;
			A.setElement(i, j, value);
		}
	}
	
	for(i = 0; i < m; i++)
	{
		cout<<endl;
		for(j = 0; j < n; j++)
		{
			
			cout<<" "<<A.getElement(i,j);
		}
	}
	
	return 0;
}
