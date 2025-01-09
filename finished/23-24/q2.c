#include <stdio.h>
#include <string.h>
#define N 11

void sort(int *grades, char** n2){

int temp;
char temp_char[20];
float av_top;
float av;
int total=0;

for(int i=0; i<N-1; i++){
		for(int j=0; j<N-i-1;j++){
		
			if( *(grades+j)> *(grades+j+1)){
				
				temp=*(grades+j);	
				*(grades+j)=*(grades+j+1);
				*(grades+j+1)=temp;
				
				strcpy(temp_char, *(n2+j));
				strcpy(*(n2+j),*(n2+j+1));
				strcpy(*(n2+j+1),temp_char);				
			
      }
	}

	
 	 }
 	 for(int i=0; i<N; i++) total+=*(grades+i);	
 	 
 	 av=(float)total/N;
 	 printf("Avarage of all clas is %f\n", av);
 	 
 	 total=0;
 	 for(int i=N-10; i<N; i++){
 	 total+=*(grades+i);
 	 
 	 printf("Top %d. student is %s and grade's is %d\n", 11-i, *(n2+i), *(grades+i));	 
 	
 	 }
 	 
 	 av_top=(float)total/10;
 	 printf("Avarage of top 10 is %f\n", av_top); 
 	 
 	 
 







}


int main(void){


int grades[N]={10, 10, 10, 10, 10, 20, 20, 20, 20, 20, 10};  
char names[N][20]={"berat", "ali", "beli","celi", "deli", "eli", "feli", "geli", "ğeli", "keli", "leni" };

char* n1[N]; //satur
char** n2=n1; //sütun

for(int i=0; i<N; i++)
	*(n2+i)=names[i];
	
sort(&grades[0],n2);	//(&grades[0] = grades)



}
