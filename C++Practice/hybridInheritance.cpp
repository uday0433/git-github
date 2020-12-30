#include<iostream>
using namespace std;

class student{
	protected:
		int roll_number;
	public:
		void get_number(int a){
			roll_number = a;
		}
		
		void put_number(void){
			cout<<"Roll number = "<<roll_number<<endl;
		}
};

class test : public student{
	protected:
		int part1;
		int part2;
	public:
		void get_marks(int x, int y){
			part1 = x;
			part2 = y;
		}
		
		void put_marks(void){
			cout<<"Part1 marks = "<<part1<<endl;
			cout<<"Part2 marks = "<<part2<<endl;
		}
};

class sports{
	protected:
		int score;
	public:
		void get_score(int a){
			score = a;
		}
		
		void put_score(void){
			cout<<"Score = "<<score<<endl;
		}
};

class result : public test, public sports{
	private:
		int total;
	public:
		void display(void);
}; 

void result::display(){
	total = part1  + part2  + score;
	
	put_number();
	put_marks();
	put_score();
	
	cout<<"Total = "<<total<<endl;
}

int main(){
	result student1;
	student1.get_number(3);
	student1.get_marks(45, 65);
	student1.get_score(7);
	student1.display();
	
	return 0;
}
