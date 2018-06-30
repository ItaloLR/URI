#include <stdio.h>
#include <stdlib.h>

int main(){
	int num_1, num_2, num_3, aux_1, aux_2, aux_3, temp;
	
	scanf("%d %d %d",&num_1,&num_2,&num_3);
	
	aux_1=num_1;
	aux_2=num_2;
	aux_3=num_3;
	
	if(aux_1>aux_2){
		temp=aux_1;
		aux_1=aux_2;
		aux_2=temp;
		
		}
		
		if(aux_1>aux_3){
		temp=aux_1;
		aux_1=aux_3;
		aux_3=temp;
		
		}
		
		printf("%d\n%d\n%d\n\n",aux_1,aux_2,aux_3);	
		printf("%d\n%d\n%d\n",num_1,num_2,num_3);	
	
	
}
