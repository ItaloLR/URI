#include <stdio.h>
#include <stdlib.h>

int calcula_media (){
	
float nota_1, nota_2, nota_3, nota_4, exame, md, total;

scanf("%f %f %f %f", &nota_1,&nota_2,&nota_3,&nota_4);

md=(nota_1 * 2.0 + nota_2 * 3.0 + nota_3 * 4.0 + nota_4 * 1.0) /10.0; 

if(md>=7.0){
	
	printf("Media: %.1f\n",md);
	printf("Aluno aprovado.\n");
	
} else if(md<5.0) {
	
	printf("Media: %.1f\n",md);
	printf("Aluno reprovado.\n");
} else{
	printf("Aluno em exame.\n");
	scanf("%f",exame);
	total=(md+exame)/2;
}if(total>=5.0){
	
	printf("Aluno aprovado.\n");

} else{
	printf("Aluno reprovado.\n");
	
}
	
	printf("Media final: %.1f\n",total);
}

int main (){
	
	int x;
	
	calcula_media(x);
	
	return 0;
} 
