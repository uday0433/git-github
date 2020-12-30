#include<iostream>
using namespace std;

class alpha{
		int x;
	public:
		alpha(int a){
			x = a;
			cout<<"alpha initialized"<<endl;
		}
		
		void showx(void){
			cout<<"x = "<<x<<endl;
		}
};

class beta{
		int y;
	public:
		beta(int b){
			y = b;
			cout<<"beta initialized"<<endl;
		}	
		
		void showy(void){
			cout<<"y = "<<y<<endl;
		}
};

class gamma : public beta, public alpha{
		int m, n;
	public:
		gamma(int a, int b, int c, int d) : alpha(a), beta(b){
			m = c;
			n = d;
			cout<<"gamma initialized"<<endl;
		}
		
		void showmn(){
			cout<<"m = "<<m<<endl;
			cout<<"n = "<<n<<endl;
		}
};

int main(){
	gamma g(4,5,3,6);
	g.showx();
	g.showy();
	g.showmn();
	
	return 0;
}
