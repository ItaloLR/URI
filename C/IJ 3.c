#include <stdio.h>

int main(){
	
    int x,i,j,a=7;
    
    for(i=1;i<=9;i=i+2){
        for(x=1;x<=3;x++)
              j=a;
              j--;
            printf("I=%d J=%d\n", i, j);
            a=a+2;
    }
    
    return 0;
}

