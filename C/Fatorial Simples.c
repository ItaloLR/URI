#include <stdio.h>
#include <stdlib.h>

int main(){
	int valor=1, i,num;
	
	scanf("%d", &num);
	
     for(i=1; i<=num;i++){
       valor = valor * i;
         printf("%d\n",valor);
}

return 0;
	
}
