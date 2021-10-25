#include <iostream>

using namespace std;
class queues {
protected :
    int counter;
    int s;
    int data;
    int rear,fron;
    int *arrayq;
public:
    queues();
    queues(int s);
    ~queues();
    int serve();
    int append (int data);
    int retrieve(int &data);
    bool isfull();
    bool isempty ();

};
queues::queues(){
int fron=0;
int s=10;
int rear=0;
counter=0;
arrayq=new int [s];




}
queues::queues(int s){
 fron=0;
 this->s=s;
rear=0;
counter=0;
arrayq=new int [s];




}
queues::~queues(){
cout <<"inside the destructor"<<endl;
delete []arrayq;

}
int queues::append(int data){
int flag1=1;
if(isfull()){
    cout<<"full queue"<<endl;
    flag1=-1;
    }
else{

    arrayq[rear]=data;
    rear=(rear+1)%s;
    counter++;


}


return flag1;


}
int queues::retrieve(int &data){
int flag2=1;
if(isempty()){

    cout<<"is empty queue"<<endl;
    flag2=-2;



}
else {data=arrayq[fron];}
return flag2;


}
int queues::serve(){
int flag3=1;
if(isempty()){

    cout<<"is empty queue"<<endl;
    flag3=-2;



}
else {fron=(fron+1)%s;counter--;}
return flag3;



}
bool queues::isempty(){
if(fron==rear)return 1;
else return 0;
}
bool queues::isfull(){
if((rear+1)%s==fron){return 1;}
else return 0;

}

int main()
{
int x;
queues q1(4);
queues q2;
cout<<"the queue is :";
q1.isfull()? cout<<"full\n":cout<<"not full\n";
cout<<"the queue is :";
q1.isempty()? cout<<"empty\n":cout<<"not empty\n";
q1.append(2);
q1.append(3);
q1.append(4);
q1.append(6);
q1.retrieve(x);
cout<<x<<endl;
q1.serve();
q1.retrieve(x);
cout<<x<<endl;
q1.serve();
q1.retrieve(x);
cout<<x<<endl;
q1.serve();
q1.retrieve(x);
cout<<x<<endl;
q1.serve();


    return 0;
}
