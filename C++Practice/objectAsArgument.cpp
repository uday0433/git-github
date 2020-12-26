#include<iostream>
using namespace std;

class time{
	int hours;
	int minutes;
	
	public:
		void getTime(int h, int m)
		{
			hours = h;
			minutes = m;
		}
		
		void putTime(void){
			cout<<hours<<" hours "<<minutes<<" minutes "<<endl;
		}
		
		void sum(time, time);
};

void time::sum(time t1, time t2){
	minutes = t1.minutes + t2.minutes;
	hours = minutes/60;
	minutes = minutes%60;
	hours = hours + t1.hours + t2.hours;
}

int main(){
	time t1,t2,t3;
	
	t1.getTime(2, 45);
	t2.getTime(3, 30);
	
	t3.sum(t1, t2);
	
	cout<<"t1 : ";t1.putTime();
	cout<<"t2 : ";t2.putTime();
	cout<<"t3 : ";t3.putTime();
	
	return 0;
}
