#include <iostream>
#include <string.h>
using namespace std ;
class identity{
	char firstname[20]; 
	 char lastname[20] ;
	char nationality[30];
	long id;
	public :
	void	setFirstname(char fn[20]);
		void setLastname(char ln[20]);
		void setnationality (char n[30]);
		void setid(long i);
		identity ();
		void printidentity();
		
	
	
	
	
	
	
};
void identity::setFirstname(char fn[20])
{
	strcpy(firstname,fn);
	
	
	
}
void identity::setLastname(char ln[20])
{
	strcpy(lastname,ln);
	
	
	
}
 void identity::setnationality(char n[20])
{
	strcpy(nationality,n);
	
	
	
}
void identity::setid(long i){
	
	id=i ;
	 
	
}
void identity::printidentity(){
	cout<<"name____"<<firstname<<" "<<lastname <<endl; 
	cout<<"nationality__"<<nationality<<endl ;
	cout<<"ID___"<<id<<endl;
	 
	
	
}

int main() {
	
	
	return 0;
}
