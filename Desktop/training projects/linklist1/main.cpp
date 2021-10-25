#include<string.h>
#include <iostream>
using namespace std;
  typedef struct st {
  char name[16];
  int id ;
  char adress[67];
  int age ;
  st*next ;
  }node;
node*head ;
node * create_node(){
node*n ;
n=new node ;
n->next=NULL ;
return n;
}
node *creat_node_with_data (int age,int id,char*adress,char *name ){
node*n ;
n=new node;
n->next=NULL;
n->id=id;
n->age=age ;
strcpy(n->name,name);
strcpy(n->adress,adress);
return n ;


}
 node * add_node (node*head , node *n){
 node *p1,*p2;
 if (head==NULL){
    head =n ;
    return head ;
 }
 if (n->id<head->id){

    n->next =head;
    head=n;
    return n ;
  }
 p1=p2=head;
 while (p2!=NULL)
 {
     if (n->id<p2->id){

        n->next=p2;
        p1->next=n;
        return head;


     }
     else{
        p1=p2 ;
        p2=p2->next;

     }//else
 }//while
 n->next= p2 ;
 p1->next =n;
  return head ;


 }//function
 node *delete_node(node*head ,int id){
 node *p1,*p2 ;
 if (head==NULL)return head ;
 p1=p2=head ;
 if (head ->id==id){
    head =head->next ;
    delete (p2);
    return head ;
    }
 while (p2!=NULL){
    if(p2->id==id){

        p1->next=p2->next ;
        delete p2 ;
        return head;
    }

 else {
    p1=p2;
    p2=p2->next;
     }}
return head ;


 }

 node * delete_list(node *head){
 node *p ;
 while(head!=NULL){
p=head;
head=head->next;
delete (p);
}

 return head ;

 }
 void print_node(node*head, int id){
 node*p ;
 p=head ;
 while (p!=NULL){
    if (p->id==id){
        cout<<"id \t name \t adress\t age"<<endl ;
        cout<<p->id<<"\t";
        cout<<p->name <<"\t";
        cout<<p->adress<<"\t";
        cout<<p->age<<endl;

        return ;
    }
    p=p->next ;


 }
 cout<<"not found"<<endl ;



 }
 void print_list (node*head )
{
    node *p ;
     p=head ;
     if (head ==NULL){

        cout <<"empty list"<<endl ;
        return;
     }
      cout<<"id \t name \t adress\t age"<<endl ;
      cout<<"======================================"<<endl ;
      while (p!=NULL){
         cout<<p->id<<"\t";
        cout<<p->name <<"\t";
        cout<<p->adress<<"\t";
        cout<<p->age<<endl;

        p=p->next ;

      }

}
void print_menu(){
cout <<"********menu*******************"<<endl ;
cout<<"1.add anew node"<<endl ;
cout<<"2.print a node"<<endl ;
cout<<"3.print the list"<<endl ;
cout<<"4.delete anode "<<endl ;
cout<<"5. delete the list completely"<<endl ;
cout<<"6. Exit"<<endl ;

cout<<"\n\n enter your choice"<<endl ;

}


int main()
{
    int ch , id , age ;
    char name [36];
    char adress[64];
    node *head, *n;
    head=NULL;
    while (1){

        print_menu();
        cin>>ch ;
        switch(ch)
        {
            case 1:cout<<"enter the id"<<endl ;
            cin>> id ;
            cout<<"enter the adress"<<endl ;
            cin>> adress;
            cout<<"enter the name"<<endl ;
            cin>> name;
            cout<<"enter the age"<<endl ;
            cin>> age;
            n=creat_node_with_data(age,id,adress,name);
            head=add_node(head,n);
            break;
            case 2:
                cout<<"enter the id to print :"<<endl ;
                cin>>id ;
               print_node(head,id);
               break;
               case 3 :print_list(head);
               break;
               case 4 :cout<<"enter the id to delete"<< endl ;
               cin >>id ;
               head =delete_node(head, id );
                    break ;
                    case 5 :head=delete_list(head);
                    break ;
                    case 6: head=delete_list(head);

                    break ;
                    default:cout<<"unknown choice"<<endl;


        }}





    return 0;
}
