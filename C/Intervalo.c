#include <stdio.h>
main(){
	
        float intervalo;
        
        scanf("%f",&intervalo);
        
        if (intervalo>100 || intervalo<0)
            {
            printf("Fora de intervalo\n");
            }
        else if (intervalo<=25.00){
        	
            printf("Intervalo (0,25]\n");
            }
        else if (intervalo<=26){
        	
            printf("Intervalo (25,50]\n");
            }
        
        else if(intervalo<=100.00) {
        	
            printf("Intervalo (75,100]\n");
            }
            
    return 0;
    
    }
