#include <iostream>
int counter ;
using namespace std;
struct node {
int data ;
node* next ;

};
node *head ;
node *creat_node (int data){
node *p ;
p=new node ;
p->data=data;
p->next=NULL ;
 return p ;


}
node *link(node* head, node*n){
    node*p1,*p2;
if (head==NULL){
    head= n ;
    return head;


}
if (n->data<head->data){

n->next=head;
head=n ;
return head ;


}
p1=p2=head ;
while (p2!= NULL){
        if(n->data<p2->data){
    n->next=p2;
    p1->next =n ;
    return head ;
        }
        else{
                p1=p2 ;
        p2=p2->next ;


        }

}

n->next=p2 ;
p1->next=n ;
return head ;



}
void print(node *head){
    int counter=0;
node *p ;
p=head;
if (head==NULL)cout<<"empty list"<<endl ;
while (p!=NULL){
cout <<p->data<<"->>\t";
p=p->next ;

}}
int length (node * head){
node * p ;int counter;
while (p!= NULL){
p=p->next ;
counter++; }
return counter;


}



node* inverse (node *head){
node *p1,*p2;
int i,j,k,temp;
p1=head ;

i=length(head);
j=0;
while(p2!=NULL)p2=p2->next;
while(i>j){


    temp= p1->data;
    p1->data=p2->data;
    p2->data=temp;
    p1=p1->next;
    p2=head;
    while(k<i-1){
            k=0;
        p2=p2->next;
        k++;
    }

    i--;j++;

}
return head;

}






int main()
{int data; node *h,*n;
while (1){
    cout<<"enter the data"<<endl ;
    cin>>data;

    n=creat_node(data);
    head=link(head,n);

        if (data==0)break ;



}


inverse(head);
cout<<"\n";
print(head);
    return 0;
}
