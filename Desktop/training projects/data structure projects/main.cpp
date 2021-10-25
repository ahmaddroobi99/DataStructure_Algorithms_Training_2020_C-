#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class circle {
private :int x, y ; 
int r ; 
double area ();

public :
    
    circle (); 
    circle (int a ,int b ); 
    circle (int a, int b , int c ) ; 
    ~circle (); 
    void set_center (int a, int b ); 
    void set_radius (int k);
    double get_area () ;
    

    



};
circle::circle(){x=y=r= 0 ; 
}
circle ::circle(int a, int b){

x=a;
y=b; 
r= 0; 
}
circle ::circle(int a, int b, int c){
x=a ;
 y=b ; 
 r=c; 
 }
 circle::~circle (){ 
 cout <<" inside the destector "<<endl ; 
 }
 void circle ::set_center(int a, int b ) {
 x=a; 
 y= b ; 
 
 }
 void circle ::set_radius (int c){
 if (r>=0)r=c ; 
 
 }
 double circle::area()
 {
     return 3.14*r*r ; 
     
 }
 double circle ::get_area (){
 
 return area ();
 
 
 }
int main(){
    
    int c; 
    int*w; 
    w= new circle (5,4,1); 
    c.set_center(2,4); 
    c.set_radius (2) ; 
    cout <<c.get_area() <<endl ; 
    cout << w->get_area() <<endl ; 
    
    
    
    
    
    
    
    
    
    
    
    
    


    return 0;
}

