#include <stdio.h>
#include <string.h>
#define N 100


void calculate(char *my_array, int *frequence){

	for(int i=0; i<strlen(&my_array[0]); i++){ 
	//my_array =&my_Array[0] ilk elemanın adresini göderiyoruz
	
			*(frequence+(my_array[i]-'a'))+=1;
	//frequence[my_array[i] - 'a']++; ile aynı şey. üstteki pointer erişim bu dizi erişim



}
 };






int main(void) {

	char my_array[N+1];
	int frequence[26]={0};
//    if (fgets(str, sizeof(str), stdin)) {

 	scanf("%[^\n]", my_array);
 	printf("Text: %s\n", my_array);
 	
 	char alpabeth[26];
     	for (int i = 0; i < 26; i++) alpabeth[i] = 'a' + i;

    
 	calculate(&my_array[0], frequence); 
 	//my_array = &my_array[0] dizinin tamamıyla ilgili işlem ypaılacagında
 	// ilk elemanın ADRESİNİ gönderiyoruz. bu ikisi de ilk elemanın adresini ifade eder.
 
 	for(int i=0; i<26; i++) printf("%c: %d\n", alpabeth[i], frequence[i]);	
 	
 
return 1;
}
