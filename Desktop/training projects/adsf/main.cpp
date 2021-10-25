#include <iostream>
#include <string.h>
#include<math.h>
int length;
    int x ;
using namespace std;
int fun2 (char y){

switch ( y){
case '1':return 1 ;break;
case '2':return 2; break;
case '3':return 3;break;
case '4' :  return 4 ;break;
case'5':return 5;break;
case'6' :return 6 ;break;
case'7':return 7 ;break;
case'8':return 8; break;
case'9':return 9; break;
}}
int fun (char str[]){
int length;
length=strlen(str);
for  (int i=0;i<length; i++){
    int x ;
    x+=fun2(str[i])*pow(10,length-i-1);

return x ;

}

}
int main(){


char w[5]={'1','2','3'};
cout<<fun(w)<<endl ;

cout<;

    return 0;
}
