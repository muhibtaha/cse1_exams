#include <stdio.h>
#include <string.h>


int check(char **my_array, char target[], int size){

   for(int i=0; i<size; i++){
	if (strcmp(*(my_array+i), target)==0) return 1;

}

return 0;




}



int
	main(void){
	int size=3;	
	char target[]={"Ekrem İmamoğlu 61"};
	char my_array[3][20]={"Mustafa Sarıgül", "Ekrem İmamoğlu 61", "Ahmet Davut 42"};
	
	char* p1[4];
	char** p2= p1;
	
	for(int i=0; i<size; i++)
		*(p2+i)= my_array[i];
	
	if(check(p2, &target[0], size)) printf("Founded\n");
	 //target = &target[0] tek boyutlu arreylerde direkt bu ikisi eşit
	 //çift boyutlu arrey olsaydı target = &target[0] olmazdı. ya direkt target yazacaktın
	// ya da pointer oluşturacaktın. &p2[0] = p2
	// yazarken iki boyutluysa hoca istemese de pointer oluştur geç
		else printf("not foundedn\n");
	return 1;
}
	
	
	
