#include <iostream>
using namespace std;
class stack {
private :
int count=0 ;
    int size ;
    int *array;
public:
    stack ();
    stack(int n);
    ~stack() ;
     int push (int data);
     int pop ();
     int top(int &data);
     bool empty ();
     bool full ();
};
stack ::stack (){
int size = 10 ;
int count= 0 ;
int *array =new int [size];

}
stack ::stack (int data ){
int size = data ;
int count= 0 ;
int *array =new int [size];

}
stack ::~stack (){

cout<<"welcome to destructor "<<endl;
}
int stack:: push (int data ){
int outcome =0;
if (full()){
    outcome =-1 ;

}


return outcome ;


}
int stack ::pop (){
int outcome =0 ;
if (empty ()){
    outcome=-2;



}
else {

    count-- ;
}
return outcome;

}

int stack ::top (int & data){

 int outcome=0;
if(empty()){outcome =-2; }
else {

    data=array[count-1];

}
return outcome  ;

}
bool stack ::full(){
if (count==size){return true;}
else  {return false ;}

}
bool stack ::empty(){
if (count==0){return 1;}
else {return 0 ;
}


}
int main()
{
    int x, y;
    stack st1 ;
    stack st2(20);

st1.push(5);
    cout<<st1.top(x)<<endl;
    cout<<x<<endl;


    return 0;
}
