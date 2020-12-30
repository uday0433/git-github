#include<iostream>
using namespace std;

class alpha{
		int x;
	public:
		alpha(int i){
			x = i;
			cout<<"alpha constructed"<<endl;
		}
		
		void showalpha(void){
			cout<<"x = "<<x<<endl;
		}
};

class beta{
		int p, q;
	public:
		beta(int a, int b):p(a), q(b + p){
			cout<<"beta constructed"<<endl;
		}
		
		void showbeta(void){
			cout<<" p = "<<p<<endl;
			cout<<" q = "<<q<<endl;
		}
};

class gamma: public beta, public alpha{
		int u, v;
	public:
		gamma(int a, int b, int c):alpha(a*2), beta(c, c), u(a){
			v = c;
			cout<<"gamma constructed"<<endl;
		}
		
		void showgamma(void){
			cout<<" u = "<<u<<endl;
			cout<<" v = "<<v<<endl;
		}
};

int main(){
	gamma g(2,3,4);
	g.showalpha();
	g.showbeta();
	g.showgamma();
	
	return 0;
}
