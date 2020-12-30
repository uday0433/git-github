#include<iostream>
using namespace std;

class item{
	int code;
	int price;
public:
	void getdata(int a, int b){
		code = a;
		price = b;
	}
	
	void show(void){
		cout<<"code = "<<code<<endl;
		cout<<"price = "<<price<<endl;
	}
};

const int size=2;

int main()
{
	item *p = new item[size];
	item *d = p;
	int x, y, i;
	
	for(i = 0; i<size; i++){
		cout<<"enter code and price:"<<endl;
		cin>>x>>y;
		p->getdata(x,y);
		p++;
	}
	
	for(i = 0; i < size; i++){
		d->show();
		d++;
	}
	return 0;
}
