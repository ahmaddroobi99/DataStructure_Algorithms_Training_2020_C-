#include <iostream>

using namespace std;
class complex {
private : double r ,i ;
public :
    complex (){r=0 ,i=0;}
    complex (double re ,double im);
    void print ();
    friend complex operator + (complex o1, complex o2);
    friend complex operator - (complex o1 , complex o2 );
    friend complex operator  * (complex o1 ,complex o2 );
     friend complex operator +(complex o1 ,int z);
     friend complex operator + (int z , complex o2 );


};

complex ::complex(double re , double im ){r=re ; i=im ; }
void complex ::print(){cout<<r<<"  +j" <<i<<endl; }
complex operator +(complex o1 ,complex o2){
complex  temp ;
temp .r = o1.r+o2.r ;
temp.i= o1.i+o2.i ;
return temp ;
}
complex operator - (complex o1,complex o2){
complex temp ;
temp.r= o1.r+o2.r ;
temp.i =o1.i+o2.i ;
 return temp ;
}
complex operator * (complex o1,complex o2){
complex temp ;
temp.r=(o1.r*o2.r)-(o1.i*o2.i);
temp .i=(o1.r*o2.r)+(o1.i*o2.i);
return temp ;
}
complex operator +(complex o1,int z )
{
    complex tmp ;
    tmp.r = o1.r+z;
    tmp.i=o1.i;
    return tmp ;

}
complex operator +(int z ,complex o2 ){
complex temp ;
temp.r = z +o2.r ;
 temp .i= o2.i ;
 return temp;
 }






int main()
{
complex o1 (3,4),o2 (2,6);
complex o3,o4,o5,o6 ;
o3=o1+o2 ;
o3.print();
o4=o1-o2 ;
o4.print();
o5=o1*o2;
o5.print();
o5=o1+3;
 o5.print();
 o6=3+o3;
 o6.print();


    return 0;
}

