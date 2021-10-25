#include <iostream>
using namespace std;
class matrix {

        int **mat ;
public :
    matrix();
    int v  ;
    int getv();
 matrix
  (int v );
~matrix ();
matrix(matrix &m);
  void setelement(int row ,int colum,int element );
 int  getelement( int row ,int colum );
 bool operator == (matrix x);
  friend ostream &operator << (ostream & out, matrix x );
 void   operator >>(matrix x);
};
matrix::matrix(){
v=3;
}
int matrix::getv(){

return v;}
matrix ::matrix(int v){
    this->v =v ;
mat=new int   *[v];
for(int i=0;i<v;i++){

    mat[i]=new int[v];
}

}
void matrix ::setelement(int row, int colum, int element ){
    mat[row][colum]=element ;

    }
int matrix ::getelement(int row ,int colum ){
    cout << mat [ row ][colum];
return mat[row ][colum];
}

matrix :: matrix(matrix &m ){
    int row ;int colum ;
    row=v;
    colum =v ;
for (int i=0 ;i<row;i++)
for (int j=0 ;j<colum;j++){

    if (i>j){
        mat[i][j]=0;
    }
}


}
bool matrix ::operator==(matrix x) {
       int row ;int colum ;
    row=v;
    colum =v ;

     int flag =0;
for (int i=0 ;i<row;i++)
for (int j=0 ;j<colum;j++){
if (mat[i][j]!=x.mat[i][j]){flag =1;break;}
}
if (flag==0)return true ;
else return false ;
}
ostream &operator <<(ostream &out , matrix x){
 int row ;int colum ;
    row=x.getv();
    colum =x.getv();
for (int i=0 ;i<row;i++)
for (int j=0 ;j<colum;j++)
{
   cout<<x.mat[j][i];
}
}
void matrix::  operator >>(matrix x){
 int *f=new int [v];
int temp ;
 int row ;int colum ;
    row=x.getv()/2;
    colum =x.getv();
for (int i=0 ;i<row;i++)
for (int j=0 ;j<colum;j++){
    temp=mat[i][j];
    mat[i][j]=mat[i][x.getv()-i];
    mat[i][x.getv()-i]=temp ;
}

}
matrix::~matrix(){
    for  (int i=0 ;i <v ; i++)delete []mat [i] ;
    delete []mat ;

}
    int main()
{ matrix  m;int x;


int row, colum ;

m.setelement(2, 3, 5);

m.getelement(2, 3);
    return 0;
}
