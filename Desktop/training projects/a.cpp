#include <iostream>
using namespace std ; 

class clock {
	private :
	int sec ;  
	int min ;
	 int hr; 
	 public :
	 	void setTime (int hour,int min, int second);
	 	 void getTime (int &hour,int &min, int &second)const;
	void printTime ()const; 
	void incrementSeconds();
	void incrementMin();
	void incrementHour();
	bool equal (const clock &otherclock )const ; 
	
	
	
	
};

void clock ::setTime(int hour,int min, int second){
	
	if(0<=hour&&hour<24)
	hr= hour ; 
	else 
	hr=0 ; 
	if (0<=min&&min<60)
	min=min; 
	else min=0; 
	if(0<=second&&second<60)
	sec=second ; 
	else sec = 0 ; 
	
	
	
	
}
void clock :: getTime (int &hour,int &min, int &second)const {

hour=hr ; 
min=min ; 
second= sec; 




}

void clock :: printTime ()const{
if (hr<10)
cout<<"0";
cout<<hr<<":";
if (min<10)
cout<<"0";
cout<<min<<":";
if (sec<10)
cout<<"0";
cout<<sec;
}

void clock ::incrementHour(){
	
	hr++;
	 if (hr>23)
	 hr= 0 ; 
	 
	
	
}
void clock ::incrementMin(){
	min ++;
	 if (min>59){
	 min = 0 ; 
incrementHour(); 
	 
}
	
	
	
}
void clock ::incrementSeconds (){
	sec++; 
	if (sec >59){
	sec = 0 ; 
	incrementMin ();
	
	
}
	
}


bool  clock ::equal(const clock &otherclock ) const {

return (hr==otherclock.hr&&min==otherclock.min&&sec == otherclock.sec);


}

int main(int argc, char** argv) {
	
	clock ahmad ;
	ahmad.setTime(10,20,30);
	ahmad.printTime();
	ahmad.incrementSeconds();
	ahmad.printTime();
	
	
	
	
	return 0;
}
