#include <iostream>
#include<stack>
using namespace std;
/*class node {
public : int item ;
node*next;
node(){item =0 ;next= NULL;}
node (int n){item = n ; next= NULL;}
};
class stackl {
private : node* topnode ;
public : stackl();
int pop();
int top (int&item);
int push (int item );
bool isfull(){return false;}
bool isempty();

};
stackl::stackl(){
topnode=NULL;

}
int stackl::push(int item){
node *n ;
n=new node(item);
n->next=topnode;
topnode=n;
return 1;
}
int stackl::top(int &item){
int flag1=1;
if (topnode==NULL)flag1=-2;
else{item=topnode->item;}
return flag1;
}
int stackl ::pop(){
node *p ;
int flag2=1;
if (topnode==NULL){flag2 =-2;}
else{


    p=topnode;
    topnode=topnode->next;
    delete p ;
}
return flag2;
}
bool stackl::isempty(){
if (topnode==NULL)return 1;
 else return false ;

}
*/
int main()
{

    int n,item;
    stack<int> st ;
    st.empty()?cout<<"\nempty\n":cout<<"\nnot empty\n";
    cout<<"\"enter n\""<<endl ;
    cin>>n;
    for (int i=0;i<n;i++){

        cout<<"enter item # "<<i+1<<":";
        cin>>item ;
        st.push(item);



            }
              st.empty()?cout<<"\nempty\n":cout<<"\nnot empty\n";
              while (!st.empty()){
                cin>>item;
                st.push(item);
              }
 st.empty()?cout<<"\nempty\n":cout<<"\nnot empty\n";
 while(!st.empty()){
  item= st.top();
  cout<<"hell"<<endl;
    cout<<item<<endl;
    st.pop();




 }
 st.empty()?cout<<"\nempty\n":cout<<"\nnot empty\n";
    return 0;
}
