#include <iostream>
#include <stdio.h>


int main() {
FILE *fp1,*fp2 ; 
int ch ; 
if ((fp1=fopen ("ahmad.txt","r"))==NULL){
	printf ("cant  open source file \n ");
	 
	
}
	 if ((fp2=fopen("mohammad.txt","w"))==NULL){
	 	printf ("cant  open dsetination  file \n ");
	 	
	 	
	 }	
	 	while ((ch=fgetc(fp1))!=EOF)
	 	fputc (ch , fp2);
	 	fclose(fp1);
		  fclose (fp2); 
		   

	
	return 0;
}
