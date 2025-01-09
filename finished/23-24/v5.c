#include <stdio.h>

//ebob

int ebob(int a, int b){
	int max;
	int divider;
	if (a>=b) max=a; 
		else if(a<b) max=b;
	
 	for(int i=1; i<max; i++){
 	
 	if(a%i==0&& b%i==0) divider=i;
 	
 	
 	}
	return divider;
}


int ekok(int a, int b){
	int max= a*b;
	int ekok;
	for(int i=max; i>1; i--){
	
	if(i%a==0 && i%b==0) 	ekok=i;
	
	}
	
	return ekok;

}



int
	main(void){
			int a=6;
			int b=9;
			
			printf("%d\n", ebob(a,b));
			printf("%d\n", ekok(a,b));
	
	
	
	}
