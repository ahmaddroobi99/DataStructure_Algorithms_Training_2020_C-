#include <iostream>
#include <stdio.h>
using namespace std;
class Vector{
private:
double i ;
double j ;
double k ;
public :

Vector ahmad(int i,int j,int k);
Vector operator +(Vector v2);
friend Vector operator -(Vector v1,Vector v2);
double operator * (Vector v2);
friend Vector operator * (int x, Vector v1 );
friend ostream &operator <<(ostream &out, Vector v );
friend istream &operator >> (istream &in ,Vector v);
Vector operator /(Vector v2);

};
Vector  Vector::ahmad(int i,int j, int k ){
this->i=i;
this->j=j ;
this-> k=k;

}
Vector Vector ::  operator +(Vector v1){
Vector temp ;
temp.i=i+v1.i ;
temp.j=j +v1.j ;
temp.k=k +v1.k;
return temp ;


}
 Vector operator -(Vector v1,Vector v2){
Vector temp ;
temp.i=v1.i - v2.i ;
temp.j=v1.j- v2.j ;
temp.k =v1.k- v2.k ;
return temp ;

}
double Vector :: operator * (Vector v2){

int a ;
a = this->i* v2.i+this->j*v2.j+this->k*v2.k ;
cout<<a<<endl ;

return a;



}
 Vector  operator * ( int x, Vector v1){
 Vector v ;
v.i=x*v1.i;
v.j =x*v1.j ;
v.k=x*v1.k ;
return v ;




 }
ostream &operator <<(ostream &out, Vector v ){

cout<<v.i<<"i"<<"+"<<v.j<<"j"<<"+"<<v.k<< "k "<<endl;
return out ;


}
istream &operator >> (istream &in ,Vector v){

cin >>v.i;
cin>>v.j ;
cin>>v.k ;
 return in;
}
Vector Vector:: operator /(Vector v2){
Vector temp ;
 temp.i=j*v2.k-k*v2.j;
 temp.j = i*v2.k-k*v2.i ;
 temp.k=i*v2.j-j*v2.i;
 return temp ;




}

int main()
{ Vector h;
    Vector a,b ,c;
  cin>>a;
  cout<<a;
    return 0;
}
