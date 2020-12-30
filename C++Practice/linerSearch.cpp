#include<iostream>
using namespace std;

int main(){
	int arr[10] = {34,24,6,31,8,43,2,6,3,21};
	int *p, i, item;
	
	p = arr;
	
	cout<<"enter the search element: "<<endl;
	cin>>item;
	
	for(i = 0; i < 10; i++){
		if(*p == item){
			cout<<"item found"<<endl;
			break;
		}
		else if(i == 9){
			cout<<"item not found"<<endl;
		}
		p++;
		
	}
	
	return 0;
	
}
