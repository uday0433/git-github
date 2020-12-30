#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char *ptr[4]={
	"book", "television","cricket","mobile"
	};
	
	int i;
	char str[25];
	
	cout<<"Enter item:"<<endl;
	cin>>str;
	
	for(int i= 0; i < 4; i++){
		if(!strcmp(str, *ptr[i])
		{
			cout<<"item available";
			break;
		}
	}
	
	if(i == 4){
		cout<<"item not available";
	}
	
	return 0;
}
