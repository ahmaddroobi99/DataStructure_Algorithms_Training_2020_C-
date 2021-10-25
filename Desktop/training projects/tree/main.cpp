#include <iostream>

using namespace std;
struct node{
int data;
 node *left;
 node *right;
 };
 node *creatnode(int data){
 node *n;
  n=new node;
  n->data=data;
  n->left=NULL;
      n->right=NULL;
      return n ;
       }

 void addnode(node * root,node*n ){
 if(n->data<root->data)
 {  if (root->left==NULL){
 root->left=n;
 return ;
  }
 addnode(root->left,n);
 }
 else{
    if (root->right==NULL){
        root->right=n;
        return ;
    }
    addnode(root->right,n);


 }


 }
void print_inorder(node* root ){



if (root==NULL)return ;
 print_inorder(root->left);
 cout<<root->data<<endl;
  print_inorder(root->right);

}
void print_preorder(node* root){
if(root==NULL)return ;
cout<<root->data<<endl ;
print_preorder(root->left);
print_preorder(root->right);


}
void print_post(node *root){
if (root==NULL){
    print_post(root->left);
    print_post(root->right);
    cout<<root->data<<endl ;



}


}
node* insertnode (node* root , node* n ){
if (root ==NULL){root =n;
return root ;
}
if (n->data<root->data){

    if (root->left==NULL)root->left=n ;
    else root->left=insertnode(root->left,n );
    return root;

}
else {
    if (root->right==NULL)root->right=n;
    else root ->right=insertnode(root->right,n);
    return root;
}

}
bool searchnode(node*root ,int data){
bool flag =false ;
 if (root ==NULL )return false ;
if(root->data==data){
    cout<<"existed"<<endl;
    flag=1;

}
if (!flag){
    flag=searchnode(root->left,data);

}
if(!flag)flag=searchnode(root->right,data);
return flag;

}
void removed(node* &subroot){
node *todelete ;
node *parent ;
if (subroot==NULL)return;
todelete=subroot;
if (subroot->right==NULL)subroot=subroot->left;
else if(subroot->left == NULL)subroot=subroot->right  ;
else {todelete=subroot->left;
parent=subroot ;
while (todelete->right !=NULL){
    parent =todelete;
    todelete=todelete->right;}
subroot->data=todelete->data;
if (parent==subroot)subroot->left=todelete->left;
else {parent->right=todelete->left;}
}delete todelete;
return ;
}
bool deletenode (node *root , int data ){
bool result= false ;
if (root ==NULL)return false;
if (root->left!=NULL){
    if (root->left->data==data)
    {
        removed(root->left);
        result =true ;
    }}
if (root->right !=NULL)
{
    if (root->right->data!=NULL){


        removed(root->right);
        result=true;
    }
}
if (!result)result=deletenode(root->left,data);
if (!result)result=deletenode(root->right,data);
return result ;



}



int main()
{int choice ;
    int data ;
    node *root  ;
    node *n ;
    root= NULL ;
    bool result =false  ;

    while (true){
            cout<<"|__________main menu _______"<<endl ;
cout<<"|1.add anew node "<<endl ;
cout<<"|2.print pre_ordered"<<endl ;
cout<<"|3. print in order"<<endl ;
cout<<"|4.print post ordered"<<endl ;
cout<<"|5. find a node "<<endl ;
cout<<"|6.delete anode"<<endl ;
cout<<"|7. exit "<<endl ;
cout<<"\n\n enter your choice ";
cin>> choice;
switch (choice ){
case 1:cout <<"enter the data "<<endl;
cin >>data;
n=creatnode(data );
root = insertnode (root , n  );
break ;
case 2 :print_preorder(root); break ;
  case 3: print_inorder(root); break ;
    case 4:print_preorder(root) ;break ;
case 5 :cout<<"enter the id "<<endl;
cin >>data ;
result= searchnode(root ,data);
if (!result)cout <<"the node was not found" <<endl;
break ;
    case 6:cout <<"enter the id "<<endl ;
    cin >>data ;
    if (root !=NULL) {
        if (data==root->data){
            removed(root);
            result=true ;
        }
        else {result =deletenode(root,data);}
    }
    if (!result)
        cout<<"the node was not found "<<endl ;
break ;




}}





    return 0;
}

