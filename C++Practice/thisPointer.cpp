#include<iostream>
#include<cstring>
using namespace std;

class person{
	char name[20];
	int age;
	public:
		person(char *s, int a){
			strcpy(name, s);
			age = a;
		}
		
		person & greater(person &p){
			if(p.age >= age)
				return p;
			else 
				return *this; 
		}
		void display(){
			cout<<"Name = "<<name<<endl;
			cout<<"Age = "<<age<<endl;
		}
};

int main(){
	person p1("ram",32);
	person p2("john",44);
	person p3("sam",55);
	
	person p = p1.greater(p2);
	cout<<"elder person"<<endl;
	p.display();
}
