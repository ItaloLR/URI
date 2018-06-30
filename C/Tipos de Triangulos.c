#include <stdio.h>

int main(){
	
	double num1,num2,num3,temp;
	
	scanf("%lf %lf %lf",&num1,&num2,&num3);
	
	if(num1<num2){
		temp=num1;
		num1=num2;
		num2=temp;
		
		}
		
		if(num1<num3){
		temp=num1;
		num1=num3;
		num3=temp;	
		}
		if(num2<num3){
			temp=num2;
			num2=num3;
		    num3=temp;
		}
		
		if(num1>=num2+num3){
			printf("NAO FORMA TRIANGULO\n");
		}
		else{
		
		if(num1*num1 == num2*num2 + num3*num3){
			printf("TRAINGULO RETANGULO\n");
		}
		if(num1*num1 > num2*num2 + num3*num3){
			printf("TRAINGULO OBTUSANGULO\n");
		}
		if(num1*num1 < num2*num2 + num3*num3){
			printf("TRAINGULO ACUTANGULO\n");
		}
		if(num1==num2 && num1==num3 && num2==num3){
			printf("TRAINGULO EQUILATERO\n");
		}else{
		if(num1==num2 || num1==num3 || num2==num3)
			 printf("TRAINGULO ISOSCELES\n");
	    }
   }
}
