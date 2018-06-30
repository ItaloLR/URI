#include <stdio.h>

int main() {

    int i, j,x, pum=1;
    
    scanf("%d",&j);
    
    for(i=0;i<=j;i++){
    	for(x=0;x<4;x++){
	 if(pum % 4==0){
	 printf("PUM\n");
        }
        else{
        	printf("%d", pum);
		}
		pum++;
  }

    return 0;
}
}
