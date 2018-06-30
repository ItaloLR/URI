#include <stdio.h>
#include <math.h>
  
int main()
{
    double a = 0, b = 0, c = 0, r1, r2, delta;
     
    scanf("%lf %lf %lf", &a, &b, &c);
    
    delta = (b * b) - (4 * a * c);
    r1 = ((b *-1) + sqrt(delta)) / (2 * a);
    r2 = ((b *-1) - sqrt(delta)) / (2 * a);
  
    if(a == 0){
        printf("Impossivel calcular\n");
        return 0;
    }
  
    if(delta < 0){
        printf("Impossivel calcular\n");
        return 0;
    }
  
    printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    
    return 0;
    
}
