#include <stdio.h>



int symetric(int **array){

for(int i=0; i<4; i++){

  for(int j=0; j<4; j++){	
	if (*(*(array+i)+j)!=*(*(array+j)+i)) return 0;

}
 }
  return 1;
  }






int
	main(void){
	
	
    int my_array[4][4] = {
        {0, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1}
    };
    
    
    int* pointer_array[4];
    int** p2= pointer_array;
    
    for(int i=0; i<4; i++){
    				*(p2+i)=my_array[i];
    
    
    
    
    }
	
	 if(symetric(p2)) printf("It is symetric! \n");
	 	else printf("It's not symetric! \n");
	
	/*
	0 1 1 1
	1 0 1 1
	1 1 0 1
	1 1 0 0
	*/

	
	
	
	
	
	}
	
	
