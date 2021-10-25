#include <iostream>
using namespace std;
class project {
	private:
	 char name[20] ;
	  int duration ;
	   char coordinator[20] ; 
	   double cost ; 
	   public  :
	   	void setdata  ();
	   	void getdata ();
	   	
	   	
	
	
	
};

 void project ::setdata (){
 	cout <<"please enter the name of the project "<<endl ;
 	 
 	 cin>>name ;
 	 cout <<"please enter the duration of your project  <<"<<endl; 
 	 cin >> duration ;
 	cout <<"please enter the coordinator"<<endl ;
 	 cin>>coordinator ; 
 	 cout <<"please enter the cost of hte project  "<<endl ;
 	cin >>cost ;
 	
 	 
 	
 	
 	
 }
void project ::getdata  (){
	cout <<"______________________________________________________________________"<<endl ;
cout <<"the name of the project :"<< name <<endl;
 cout<<"the duration of the project :"<<duration <<endl ; 
 cout<<"the coordinator of the project"<<coordinator <<endl ;
  cout<<"the cost of the project "<<cost <<endl;
   }




int main(int argc, char** argv) {
	project water;
	water.setdata ();
	water.getdata();	
	
	return 0;
}
