#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>


void selection_sort(int vet[], int tam){
	int i,j,temp, aux;
	
	   for(i=0;i<tam;i++){
	   	for(j=i+1;j<tam;j++){
		   aux=i;  
	     if(vet[aux]<vet[j]){          
	   	  	   aux=j;     
	   	  	   			 }                                               
	   	  	   			 
	   	  	   if(aux != i){
	   	  	   	      temp=vet[i];
	   	  	   	      vet[i]=vet[aux];
	   	  	   	      vet[aux]=temp;
					}			 
							}
	   } 	   
}


int main(){
 
 int num=10, x;
  int vetor[10]={2,88,45,16,10,22,11,26,5,8};
      
        printf("SELECTION SORT\n\n");
        
	   selection_sort(vetor,num);
	   
	   for(x=0;x<num;x++){
	   	
	   	printf("Vetor Ordenado[%d] = %d\n",x,vetor[x]);
	   }
	   

	   
	   system("pause");
	   return 0;
	
}
