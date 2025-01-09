#include <stdio.h>
#include <string.h>
#define n 30
//grade [n], names[n] var. Bu sınıftaki en düşük 10 kişinin adını ve notunu, o 10 kişinin ortalama notunu, sınıfın ortalama notunu printle.


//string de göndersek iki boyutlu array de göndersek ** koymalıyız. 
void search( char **p1, int *grades, float *av_worst, float *av_p){
		
int temp;	
char temp_name[10];			     
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
					
			if(*(grades+j)>*(grades+j+1)){
					
				temp=*(grades+j);
				*(grades+j)=*(grades+j+1);
				*(grades+j+1)=temp;
					
				strcpy(temp_name, *(p1+j));
				strcpy(*(p1+j), *(p1+j+1));
				strcpy(*(p1+j+1),temp_name);
					
					
					
				 }			
					}		
						}

	int total=0;
	for (int i=0; i<10; i++) total+= *(grades+i);
	*av_worst= (float)total/10;
	
	total=0;
	for (int i=0; i<n; i++) total+= *(grades+i);
	*av_p= (float)total/n;

}

int
	main(void){
	
   float av_worst;
   float av;
   float* av_p= &av; //variable'yi pointer olarak fonksiyona göndermeyi öğrenmek için
   
   
    // 30 öğrenci için isimler
    char names[n][10] = {
        "ali", "veli", "kedi", "köpek", "ahmet", "mehmet", "ayşe", "fatma", "emre", "can",
        "ahmet", "hüseyin", "selin", "murat", "özge", "yusuf", "mustafa", "ayhan", "bilge", "serkan",
        "gizem", "seda", "orhan", "ahmetcan", "barış", "hülya", "irem", "çetin", "serap", "ömer"
    };

    // 30 öğrenci için notlar
    int grades[n] = {
        100, 40, 0, 70, 85, 92, 56, 75, 88, 94,
        61, 82, 45, 73, 89, 95, 91, 76, 84, 67,
        56, 65, 90, 74, 81, 63, 68, 88, 93, 80
    };
    
			
    char* p1[n]; //string pointer list

			
		for(int i=0; i<n; i++)	*(p1+i)=names[i];		
		
		
		search(p1, grades, &av_worst, av_p);
		
		for(int i=0; i<10; i++) 
		printf("Worst %d. student is %s and note is %d \n", i+1, *(names+i), *(grades+i));

		printf("Worst 10 avarage is %f\n",av_worst);
		printf("Class avarage is %f\n", *av_p );
		
		
		return 1;
		
	}
	
	
	
