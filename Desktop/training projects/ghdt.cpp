#include <iostream>
using namespace std;

class complex{
	double real ;
	double imag ;
	public :
		void setnum (double r, double i);
		void getnum();
		complex (double real=0,double imag=0);
		complex operator + (complex othercomplex);
	complex operator -(complex othercomplex);
	complex operator *(complex othercomplex);
	complex operator /(complex othercomplex);
	complex operator ==(complex othercomplex );

};

void complex::setnum(double r, double i)
{
real = r;
 imag=i ;


}
void complex ::getnum (){
	cout<<" "<<real<<"+"<<imag<<"i"<<endl;

}




int main() {
	complex ahmad ; 
	ahmad.setnum(10.2,2.5);
	ahmad.getnum ();
	
	
	return 0;
}


