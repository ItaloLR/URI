#include <stdio.h>

int main(){
	
    int numero, aux, i, j, c, d=0;
    
    scanf("%d", &numero);
    
    for(i=1; i<=numero; i++){
        scanf("%d", &aux);
        c=aux/2; 
		d=0;
        for(j=1; j<=c; j++){
            if(aux%j==0)
                d=d+j;
        }
        if(d==aux)
            printf("%d eh perfeito\n",aux);
        else
            printf("%d nao eh perfeito\n",aux);
    }
    
    return 0;
}
