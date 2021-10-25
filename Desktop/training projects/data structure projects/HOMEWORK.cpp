#include <iostream>
#include <stdio.h>
using namespace std; 

struct grade {
	int id ; 
	double lab ; 
	double coursework ; 
	double midterm ; 
	double final ; 
	
	
	
} gr;
char  evaluation1 (int x ){
	if (x>=85&& x<=100)return 'A';
	if (x>=70&& x<=84)return 'B';
	if (x>=60&& x<=69)return 'C';
	if (x>=40&& x<=59)return 'D';
	if (x>=0&& x<=39)return 'F';
	
}
double evaluation2( ){
	
	return  .25*gr.lab+.15*gr.coursework+.3*gr.midterm+.3*gr.final ;
}

int main() {
	
 struct grade person ; 
  
FILE* mark ;
if((mark=fopen("scores.txt","w"))==NULL )printf("error ");
else {printf ("id\tlab\thomecourse\t midterm\tfinal");
	while (cin>>gr.id>>gr.lab>>gr.coursework>>gr.midterm>>gr.final ){
		
	fprintf (mark,"%d%f%f%f%f\n",gr.id,gr.lab,gr.coursework,gr.midterm,gr.final);
	}
	if((mark=fopen("scores.txt","r"))==NULL )printf("error ");
	
	else {char ch;
	while ((ch=fgetc(mark))!=EOF){
		fscanf(mark , "%d%f%f%f%f\n",gr.id,gr.lab,gr.coursework,gr.midterm,gr.final);
		printf("id\t score\t grade\n " );
		printf("%d\t%f\t%c",gr.id, evaluation2(),evaluation1(evaluation2()));
	}
	}

	
	
	
}	
	
	
	
	return 0;
}
