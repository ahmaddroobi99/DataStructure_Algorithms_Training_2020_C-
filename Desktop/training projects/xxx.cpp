#include <iostream>
using namespace std;

class complex{
	double real ;
	double imag ;
	public :
		void setnum (double &r, double &i);
		void getnum();
		complex ();
		complex operator + (complex othercomplex);
	complex operator -(complex othercomplex);
	complex operator *(complex othercomplex);
	complex operator /(complex othercomplex);
	complex operator ==(complex othercomplex );

};

void complex::setnum(double& r, double &i)
{
real = r;
 imag=i ;


}
void complex ::getnum (){
	cout<<" "<<real<<"+"<<imag<<"i"<<endl;

}
  complex complex::operator +(complex othercomplex){
	complex temp;
	temp.real=real +othercomplex.real ;
	temp.imag= imag+othercomplex.imag ;
return temp ;



}
  complex complex::operator -(complex othercomplex){
	complex temp;
	temp.real=real -othercomplex.real ;
	temp.imag= imag-othercomplex.imag ;
	return temp;

}
  complex complex::operator * (complex othercomplex){
	complex temp;
	temp.real= real*(othercomplex.real)-imag*(othercomplex.imag);
	temp.imag= (real*(othercomplex.imag))+ (imag*(othercomplex.real));

return temp;

}
int main() {
	return 0;
}

