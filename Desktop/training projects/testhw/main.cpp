#include <iostream>
#include <stdio.h>
using namespace std;
class date {
private :int day ;
int month;
int year ;


 public :
     date ();
     ~date();
     date (int d,int m ,int y);
     void setdate(int d,int m ,int y  );
     void setday (int x);
    void  setmonth(int m);
   void setyear(int y);
     int getday ();
     int getmonth();
     int getyear();
     friend ostream &operator <<(ostream &out ,date d);
     friend istream &operator >>(istream &in , date &d );
     date operator ++ ();
     date operator --();
     bool operator ==(date d);
     bool operator != (date d );
     bool operator > (date d );
     bool operator < (date d );
     };

      date::date(){
      day =1 ;
      month=1 ;
      year =2000 ;

      }
      date ::~date (){


      }
     date::date(int d,int m ,int y){

     day= d;
     month=m ;
     year =y;

     }
     void date ::setdate( int d,int m ,int y){
         int x ;
  switch(m){

    case 1:case 3: case 5:case 7 :case 8:case 10 :case 12:x=31; break ;
     case 4:case 6 :case 9 :case 11:x=30 ;break ;
    case 2 :if (y%4==0){x=29 ;break;}
    else {x=28 ;break;}
    }
     if (d<=x){
   day= d;
   if (m<=12)  {this->month=m ;}
   else {cout<<"invalid month"<<endl;}
     this ->year =y;
    }
    else {cout<<"invalid day "<<endl ;}

     }
     void date ::setday(int x  ){
     this ->day=x ;
     }
     void date ::setmonth(int m){
     this ->month=m;
     }
     void date ::setyear (int u){
     this->year=u ;
     }
     int date::getday(){
     return day;

     }
     int date ::getmonth(){
     return month;
     }
int date ::getyear(){
return year ;

}
 ostream &operator <<(ostream &out ,date d){
  cout <<d.getyear()<<"-"<<d.getmonth()<<"-"<<d.getday()<<endl ;
  return out ;

  }
    istream &operator >>(istream &in , date &y ){

     cout<<"enter the day " ;
     in>> y.day;

     cout<<"\n";
     cout<<"enter the month";

     in >>y.month;

     cout<<"\n";
     cout<<"enter the year";
    in >>y.year;

return in;



     }
     bool date :: operator ==(date d){
     if (day==d.day&&month ==d.month&& year==d.year)return true  ;
     else return false ;



     }
     bool date :: operator !=(date d){
     if (day==d.day&&month ==d.month&& year==d.year)return false  ;
     else return true  ;



     }
     bool date ::operator >(date d){
     if(year>d.year)return true  ;
     else if (year ==d.year&&month>d.month)return true;
     else if (year==d.year&&month ==d.month&&day>d.day)return true ;
     else return false ;


     }
      bool date ::operator <(date d){
     if(year>d.year)return false  ;
     else if (year ==d.year&&month>d.month)return false ;
     else if (year==d.year&&month ==d.month&&day>d.day)return false  ;
     else return true  ;}


     date date ::operator++(){
          int x;

      switch(month){

    case 1:case 3: case 5:case 7 :case 8:case 10 :case 12:x=31; break ;
     case 4:case 6 :case 9 :case 11:x=30 ;break ;
    case 2 :if (year%4==0){x=29 ;break;}
    else x=28 ;break;
    }
    ++day ;
    if (day>x){day=1;month++ ;}
    if (month>12){day=1;month=1,++year;}




     }
     date date::operator--(){
         int q;
    if (day==1&&month==1){day=31; month=12;--year;}
    q=day-1 ;
    if (q ==0){
       int x;
        month--;
      switch(month){

    case 1:case 3: case 5:case 7 :case 8:case 10 :case 12:x=31; break ;
     case 4:case 6 :case 9 :case 11:x=30 ;break ;
    case 2 :if (year%4==0){x=29 ;break;}
    else x=28 ;break;
    }
    day=x ;
    }
else {day--;}


     }
int main()
{date d1 ;
d1.setdate(2,1,1983);
cout<<d1<<endl ;

--d1;
cout<<d1;
    return 0;
}
