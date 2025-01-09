#include <stdio.h>


void calculator(char **names, int**grades, int*passed_exams, FILE *out1, FILE *out2){

for(int i=0; i<5;i++)
	for(int j=0; j<4; j++)
			if(grades[i][j]>=53) passed_exams[i]++;

	fprintf(out1, "Passed students: \n");	
	for(int i=0; i<5; i++)
			if(passed_exams[i]>=3) 

	fprintf(out1, "%s: %d, %d, %d, %d \n", names[i], grades[i][0], grades[i][1], grades[i][2], grades[i][3] );


	fprintf(out2, "Failed students: \n");	
	for(int i=0; i<5; i++)
			if(passed_exams[i]<3) 
	fprintf(out2, "%s: %d, %d, %d, %d \n", names[i], grades[i][0], grades[i][1], grades[i][2], grades[i][3] );

}



int
	main(void){
	
	FILE *input=fopen("scores.txt", "r");
	FILE *out1=fopen("A.txt", "w");
	FILE *out2=fopen("B.txt", "w");
	
	
	char names[5][6];//+1 for null
	int grades[5][4];
	int passed_exams[5];
	for(int i=0; i<5; i++) passed_exams[i]=0;


    // Pointerlar
    char *names_pointers[5];  // Öğrencilerin isimleri için pointer dizisi
    int *grades_pointers[5];  // Öğrencilerin notları için pointer dizisi

  
    for (int i = 0; i < 5; i++) {
        names_pointers[i] = names[i];  // names dizisinin her elemanını pointera atıyoruz (string array)
        
        grades_pointers[i] = grades[i];  // (iki boyutlu pointer array list)
    }

    // Veriyi input dosyasından oku
    for (int i = 0; i < 5; i++) {
        fscanf(input, "%s", names_pointers[i]);
        for (int j = 0; j < 4; j++) {
            fscanf(input, "%d", grades_pointers[i]+j); // ya da &grades_pointers[i][j] scanf e adres lazim
        }
    }

    // Hesaplamaları yap ve sonucu dosyaya yaz
    calculator(names_pointers, grades_pointers, passed_exams, out1, out2);
	
 
	
	

    fclose(input);
    fclose(out1);
    fclose(out2);
	
	return 0;	
	
	
	
	
	
	
	
	}
