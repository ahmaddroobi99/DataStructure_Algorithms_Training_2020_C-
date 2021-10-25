#include <iostream>
using namespace  std ;
class point {

public : point (int =0, int =0 ) ;
void setpoint (int ,int );
int getx(); int gety ();
~point ();
protected : int x , y ;


};
point ::point (int a, int b){

	x=a;
	y=b;
	cout <<"["  <<x<< "   ,   "<<y<<  "]"<<endl;

}
point ::~point (){


	cout <<"point destroctor : "<<"["<<x<<" ,"<<y<<"]"<<endl;

}
void point ::setpoint (int xvalue ,int yvalue ){

	x=xvalue ;
	y= yvalue ;


}

int point :: getx (){

	return x ;

}
int point ::gety (){
	return y  ;

}

class circle :public point {
public:	circle (double r= 0, int a=0 , int b=0 );
	~circle();
	void setradius (double r);
	double getradius ();
	double area() ;
	protected : double radius ;

};
circle ::circle (double r, int a, int b ):point(a,b){

	radius =r ;
	cout <<"circle constructor : radius is "<<radius <<"["<<x<<","<<y<<"]"<<endl ;



}
circle ::~circle (){
	cout <<"circle destroctor  : radius is "<<radius <<"["<<x <<","<<y<<"]"<<endl ;
}
void circle ::setradius (double r){


	if (r>=0)radius = r ;

}
double circle :: getradius (){return radius ;


}
double circle ::area (){

	return 3.1415*radius *radius ;

}

class cylinder :public circle{

	public :
	cylinder(double h = 0, double r=0 , int x = 0, int y = 0 ) ;
	void sethight (double h);
	double gethight ();
	double volume ();
	protected : double hight ;



};
  cylinder::cylinder (double h , double r ,int x , int y ):circle (r, x,y) {
	sethight (h )
; }



void cylinder ::sethight (double h ){

	hight =(h>=0 ?h:0);

}

double cylinder ::gethight(){return hight ;

}
double cylinder ::volume (){


	return area()*hight ;

}












int main(int argc, char** argv) {
cylinder cy1(5.7,2.5,12,23);
cout <<"x coordinate = "<<cy1.getx()<<endl ;
cout<<"y coodinate ="<<cy1.gety()<<endl;
cout<<"radius ="<<cy1.getradius() <<endl ;
cout<<"hight "<<cy1.gethight()<<endl ;

cy1.sethight(10);
cy1.setradius(5.23);
cy1.setpoint(2,3);
cout<<" the new location is "<<endl;

cout <<"x coordinate = "<<cy1.getx()<<endl ;
cout<<"y coodinate ="<<cy1.gety()<<endl;
cout<<"radius ="<<cy1.getradius() <<endl ;
cout<<"hight "<<cy1.gethight()<<endl ;
cout<<"the volume "<<cy1.volume ()<<endl;


	return 0;



}
