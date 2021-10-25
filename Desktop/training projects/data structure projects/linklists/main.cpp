#include <iostream>
#include <string.h>
using namespace std;
class car {
private:
    int model ; char name [100]; char color[20];char owner[120];
public :


 void set_model(int x){model =x ;}
void set_name (char y[9]){strcpy(name,y);}
void set_color (char *z){strcpy(color,z);}
void set_owner (char w[]){strcpy (owner,w);}
int get_model(){return model ;}
char get_name (){return name; }
 char get_color (){return *color;}
char get_owner (){return *owner ;}


};


int main()
{
car ahmad;
ahmad.set_name("bmw");
cout<<ahmad.get_name()<<endl ;

    return 0;
}
