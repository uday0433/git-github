#include<iostream>

using namespace std;

class employee{
	char name[30];
	int age;
	
	public:
		void getData(void);
		void putData(void);
};

void employee::getData(void){
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter age: ";
	cin>>age;
}

void employee::putData(void){
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
}

const int size = 3;

int main(){
	employee manager[size];
	
	for(int i = 0; i < size; i++)
	{
		manager[i].	getData();
	}
	
	cout<<endl;
	
	for(int i=0; i < size; i++)
	{
		manager[i].putData();
	}
	return 0;
}
