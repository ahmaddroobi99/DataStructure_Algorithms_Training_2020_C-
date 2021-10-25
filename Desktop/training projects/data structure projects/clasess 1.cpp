#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class first_class {

private :
    int x , y ;
    void set_xy (int xvalue , int yvalue );

public : int z ;
first_class();
first_class(int a, int b);
void read_xy ();
int get_x();
void incr_x ();
void incr_y ();
~first_class ();

protected :int w ;





};
//default costracter ;
first_class::first_class()
{
    w= x=y=z = 0 ;

}
first_class::first_class(int a, int b ){
x=a ;
y=b ;
z=w=0 ;


}

//destrector ;
first_class::~first_class(){}
void first_class::set_xy(int xvalue , int yvalue ){

x=xvalue ;
y= yvalue ;


}
void first_class::read_xy(){
int xvalue ; int yvalue ;
cout<<"enter x and y "<<endl ;
cin >>xvalue >>yvalue ;
set_xy (xvalue ,yvalue );




}
void first_class::incr_x(){
x++;

}
void first_class::incr_y(){y++;
}

int first_class::get_x(){
return x ;
}

int main()
{first_class a;
first_class b;
first_class *c, *d ;
c= new first_class();
d= new first_class(1,2);
a.z=7 ;
c->z= 13;
//a.x = 3 ;
//d->x = 3 ;
//cout<<c->w<< endl ;
cout<<d->get_x()<<endl ;
c->read_xy();
//a.set_xy();




    return 0;
}
