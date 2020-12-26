#include<iostream>
#include<cstring>
using namespace std;

class String{
	private:
		char *name;
		int length;
	public:
		String(){
			length = 0;
			name = new char[length+1];
		}
		
		String(char *s){
			length = strlen(s);
			name = new char[length+1];
			
			strcpy(name, s);
		}
		
		void display(void){
			cout<< name <<endl;
		}
		
		void Join(String &a, String &b);
};

void String::Join(String &a, String &b){
	length = a.length + b.length;
	delete name;
	
	name = new char[length + 1];
	strcpy(name, a.name);
	strcat(name, b.name);
}

int main(){
	char *s1 = "ram";
	String name1(s1);
	String name2("sam");
	String name3("john");
	String s2;
	String s3;
	
	s2.Join(name1, name2);
	s2.display();
	
	s3.Join(s2, name3);
	s3.display();
}
