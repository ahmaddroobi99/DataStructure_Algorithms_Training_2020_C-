#include <iostream>
#include<string.h>
	class cube {
		int *head;
		int *edge ;
		char face[30];
		bool rotation ;
		cube *time ;
		
		public :
			void getHead(int x, int y,int z);
			void getEdge(char w,bool r);
			void getFace(char pro[30]);
			void isRotating();
			
			
			
		protected :
			
		
		
		
	};
	
void cube::getHead(int x, int y ,int z){
	*head=x;
	*edge=y;
	rotation=z ;
	
	
	
}
void cube::getEdge(char w,bool r)	{
	switch (w){
	case 'a': rotation =1;break;
	case 'b':if (r==1)rotation =0;break ;
	case 'c':time->rotation =4;break ;
		
		
	
	}//switch
	
	
	
}//edge
	
void cube::getFace(char pro[30]){
	
	
	
	
}	

	

int main() {

	
	return 0;
}
