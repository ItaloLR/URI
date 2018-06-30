#include <stdio.h>

int main() {

    int i, j;
    float div_1, div_2;
    
    scanf("%d",&j);
    
    for(i=0;i<j;i++){
    	scanf("%f %f",&div_1,&div_2);
    	
        if(div_2==0){
        	printf("divisao impossivel\n");
		} 
		else{
			printf("%.1f\n",div_1/div_2);
		}  	
            
  }

    return 0;
}
