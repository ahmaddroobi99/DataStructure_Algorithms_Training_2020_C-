#include <iostream>
#include <string.h>
using namespace std ;
class identity{
protected:	char firstname[20]; 
	 char lastname[20] ;
	char nationality[30];
	long id;
	public :
	void	setFirstname(char fn[20]);
		void setLastname(char ln[20]);
		void setnationality (char n[30]);
		void setid(double i);

		void print();
		
	
	
	
	
	
	
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
void identity::setid(double i){
	
	id=i ;
	 
	
}
void identity::print(){
	cout<<"name____"<<firstname<<" "<<lastname <<endl; 
	cout<<"nationality__"<<nationality<<endl ;
	cout<<"ID___"<<id<<endl;
	 
	
	
}


class CV : public identity  {
	 
	 double average ;
	 char specialist[30];
	 char contact[30];
	 bool experience; 
	 
public 	:
void CV1(double q,char t[30],char c[30],bool e); 
	void print();
	
	
	
	
};
 void CV::CV1(double q,char t[30],char c[30],bool e){
	strcpy(specialist,t);
	strcpy (contact,c);
	average=q;
	experience=e ; 
	
	
	
}
void CV::print(){
	cout<<"average__"<<average<<endl ;
	cout<<"specialist__"<<specialist<<endl; 
	cout<<"contact"<<contact<<endl; 
	cout<<"dp yo have an experiences:"<<experience<<endl;
	
	
	
}

int main() {
CV person ;
	person.setFirstname("ahmad");
	person.setLastname("droobi");
	person.setnationality("palestinian");
	person.setid(404729782);
	person.print();
person.CV1(3.4,"computer engineering","ahmad.dro99@gmail.com",8);
person.print();


	
	
	return 0;}
	
	
	
	
