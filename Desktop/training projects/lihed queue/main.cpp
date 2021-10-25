#include <iostream>
using namespace std;
class node{
public:
    int data;
node* next ;
node(){data =0;next=NULL;}
node(int n){data=n ; next=NULL;}
};
class Queue{
protected:int counter ;node*fronted=NULL;node*rear=NULL ;
public:Queue();
~Queue();
int serve();
int append (int item);
int retrieve(int&x);
bool isfull (){return false ;}
bool isempty ();
};
Queue::Queue(){
cout<<"in side the constructor"<<endl;
counter=0;
 rear=NULL;
}
Queue::~Queue(){
node *p ;
while (fronted!=NULL){
 p= fronted ;
fronted=fronted->next;
delete p ;

}
}
int Queue ::append(int item){
    node*n;
    n= new node ;
    n->data= item ;
    n->next=NULL;
    if(isempty()){rear=fronted=n;}
    else{rear->next=n;rear=n;}
    counter++;
     return 1;
}
int Queue ::retrieve(int&x){
int flag=1;
if (isempty()){

    cout<<"is empty Queue"<<endl ;
    flag =-1;

}
else {x=fronted ->data ;
 }
return flag ;

}
int Queue::serve(){
int flag=1;
 node *p ;
 if (isempty()){


    cout<<"empty queue"<<endl ;
    flag=-2;

 }
else{
    p=fronted ;
    fronted= fronted->next;
    delete p ;
    counter --;
}
return flag;


}
bool Queue::isempty(){

if (fronted==NULL)return true;
 else return false  ;
}

class ex:public Queue{
public :
    ex();
    int sq();
    void clr();
    int serveandret(int& item);
    };
    ex::ex(){
    cout<<"extended queue defult constuctor"<<endl ;

    }
void ex::clr(){
node*p ;
while(fronted!=NULL){

    p=fronted;
    fronted=fronted->next;
    delete p; }
rear=NULL;
counter=0;


}
int ex::sq(){
return counter;
 }
int ex::serveandret(int &item){
int flag=1;
node *p;

 if (isempty()){


    flag=-2 ;
    cout<<"empty"<<endl ;


 }
else{
    item=fronted->data;
    p=fronted;
    fronted=fronted->next;
    delete p;
    counter--;
}
return flag;






}

int main()
{
    int w ;
ex q ;
 cout<<"the Queue is::"<<endl;
 q.isempty()?cout<<"is empty queue\n\n":cout<<"not empty \n\n";
 q.append(6);
 q.append(9);
 q.append(6);
 q.serveandret(w);
 cout<<w<<endl;
  q.serveandret(w);
 cout<<w<<endl;
cout<<q.sq()<<endl;
q.clr();
cout<<q.sq()<<endl;


    return 0;
}
