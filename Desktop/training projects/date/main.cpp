#include <iostream>

using namespace std;
class date {
int day ;
int month ;
int year ;
public : date (int x,int y, int z);
 int calculatemonth(int d);
double calculate() ;
 };
 date::date(int x,int y, int z){
 day=x;
 month=y;
 year =z ;
 }
 int date ::calculatemonth(int d){
     int y;
 for  (int i = 0 ; i<=d ; i++){
    int x = 0 ;
    switch(d){

    case 1:case 3: case 5:case 7 :case 8:case 10 :case 12:x=31; break ;
     case 4:case 6 :case 9 :case 11:x=30 ;break ;
    case 2 :if (year%4==0){x=29 ;break;}
    else x=28 ;break;
    }

    y+=x;
return y ;

 }





 }
double date::calculate (){

    double w =year *365 +calculatemonth (month)+day ;
double q=-1*(w-13-calculatemonth(9)-2019*365) ;
return q ;
}

int main()
{
date ahmad(14,7,1999) ;
cout<<"number of days in ypur life >>"<<ahmad.calculate()<<endl ; ;
    return 0;
}
