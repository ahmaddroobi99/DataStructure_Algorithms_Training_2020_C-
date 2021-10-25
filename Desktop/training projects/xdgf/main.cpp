#include <iostream>
#include<stdio.h>
using namespace std;

class complex0{
	double real ;
	double imag ;
	public :
		 complex0 (){real=0;imag=0;}

		complex0 (double r ,double i);
		void print ();
		complex0 operator + (complex0 othercomplex);
	complex0 operator -(complex0 othercomplex);
	complex0 operator *(complex0 othercomplex);
	complex0 operator /(complex0 othercomplex);
bool operator ==(complex0 othercomplex );

};


 complex0::complex0(double r, double i)
{
real = r;
 imag=i ;


}

void complex0 ::print (){

cout<< real<<"+j" <<imag <<endl ;



}
  complex0 complex0::operator +(complex0 othercomplex){
	complex0 temp1;
	temp1.real=real +othercomplex.real ;
	temp1.imag= imag+othercomplex.imag ;
return temp1 ;



}
  complex0 complex0::operator -(complex0 othercomplex){
	complex0 temp2;
	temp2.real=real -othercomplex.real ;
	temp2.imag= imag-othercomplex.imag ;
	return temp2;

}
  complex0 complex0::operator * (complex0 othercomplex){
	complex0 temp3;
	temp3.real= real*(othercomplex.real)-imag*(othercomplex.imag);
	temp3.imag= (real*(othercomplex.imag))+ (imag*(othercomplex.real));

return temp3;


}
complex0 complex0::operator/(complex0 othercomplex){
complex0 temp4 ;
temp4.real= ((imag*othercomplex.imag)+(real*othercomplex.real))/((othercomplex.real*othercomplex.real)+(othercomplex.imag*othercomplex.imag));
temp4.imag= ((real*othercomplex.imag)+(imag*othercomplex.real))/((othercomplex.real*othercomplex.real)+(othercomplex.imag*othercomplex.imag));
return temp4 ;



}
bool complex0 ::operator== (complex0 othercomplex){
return ( (real==othercomplex.real)&&(imag==othercomplex.imag));

}
int main() {
    complex0 num1 (3,4);
    complex0 num2 (2,6);
    complex0 num3 ;
    complex0 num4;
    complex0 num5 ;

    num3= num1+num2 ;
    num3.print();
num4= num1+num2+num3;
num4.print ();
num5 = num4/num3 ;
num5.print();
if (num5==num2)printf("they are equal ");
else {printf ("they are not equal ");}


	return 0;
}

