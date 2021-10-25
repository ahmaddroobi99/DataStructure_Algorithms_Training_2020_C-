#include <iostream>

using namespace std;
bool fact(int c){
    int flag = 0 ;
if (c==2)return true ;
else {
    for (int i =2;i<c;i++){
        if (c%i==0)flag=1;



    }
    if (!flag )return true;

if (flag)return false ;


}




}
int main(){
 cout<<fact(159857)<<endl ;


    return 0;
}
