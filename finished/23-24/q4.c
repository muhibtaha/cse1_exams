#include <stdio.h>

int compare(FILE* file1, FILE* file2){

	char c1,c2;
	
  while(1){
  	c1=fgetc(file1);
  	c2=fgetc(file2);

 	if (c1!=c2) return 0; //if any difference , it become false
 	if(c1== EOF || c2== EOF) break;
 	

 			
 
 

 }
return 1; //default true

}



int
	main(void){
	
	FILE* file1=fopen("file1.txt", "r");
	FILE* file2=fopen("file2.txt", "r");
	
	printf("%d\n",compare(file1, file2));
	
	return 1;
	
	
	
	
	
	}
