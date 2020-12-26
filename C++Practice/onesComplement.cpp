#include<iostream>
using namespace std;

class binary{
	string s;
	
	public:
		void read(void){
			cout<<"Enter binary bo.: "<<endl;
			cin>>s; 
		}
		
		void chk_bin(void){
			for(int i=0; i<s.length(); i++)
			{
				if(s.at(i) != '0' && s.at(i) != '1')
				{
					cout<<"Incorrect binary no.";
					exit(0);
				}
			}
		}
		
		void ones(void){
			chk_bin();
			for(int i = 0; i < s.length(); i++)
			{
				if(s.at(i) == '0')
				{
					s.at(i) = '1';
				}
				else
				{
					s.at(i) = '0';
				}
			}
		}
		
		void display(void)
		{
			ones();
			cout<<"One's complement = "<<s<<endl;
		}
};

int main(){
	binary b;	
	b.read();
	b.display();
	
	return 0;
}
