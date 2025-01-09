#include <stdio.h>
#include <math.h>

void find_roots(int a, int b, int c, int delta){

	int root_counter=2;
	double root_array[2];
	
	root_array[0]= (-b + sqrt(delta))/(2*a);
	root_array[1]= (-b -sqrt(delta))/(2*a);
	
	if(root_array[0]==root_array[1]) root_counter=1;
	
	if(root_counter==2)
		printf("It has %d roots. And they are %lf, %lf\n", root_counter, root_array[0], root_array[1]);
		
		else if(root_counter==1)
			printf("It has %d roots And it is %lf\n", root_counter, root_array[0]);
					


}



int
	main(void){
	
	int a,b,c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);	
	
	printf("%dx^2+ %dx + %d\n", a, b, c);
	
	int delta = b*b - 4*a*c;
	
	if(delta<0){printf("No reel root\n");
		    return 1;}
		    
		   else if(delta>=0){ printf("It have roots\n");
		   		      find_roots(a,b,c, delta);
		   
		   
		   
		   }
	
	return 1;
	
		
	}
