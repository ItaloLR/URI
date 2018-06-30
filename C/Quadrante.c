#include <stdio.h>

int main(){
	
    int i,j,x=1;
    
    while(x)
    {
        scanf("%d %d", &i, &j);
        
        if(i==0 || j==0)
            break;
        else if(i>0 && j>0)
            printf("primeiro\n");
        else if(i>0 && j<0)
            printf("quarto\n");
        else if(i<0 && j<0)
            printf("terceiro\n");
        else if(i<0 && j>0)
            printf("segundo\n");
    }
    return 0;
}

