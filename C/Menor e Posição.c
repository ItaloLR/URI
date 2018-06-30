#include <stdio.h>

int main(){
	
	int p=10, x[p], temp, aux, i;
	
	scanf("%d", &x[p]);
	
	temp=x[p];
	
	for(i=1;i<p;i++){
		scanf("%d",&x[i]);
		if(x[i]<temp){
			temp=x[i];
			aux=i;
		}
	} 
	
	printf("Menor valor: %d\n",temp);
	printf("Posicao: %d\n",aux);
	
}
