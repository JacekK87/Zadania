#include <stdio.h>
#include <math.h>
 float  a, b , c; 
 float delta, x0, x1, x2, x;
 float main()
{	

		puts ("Program do funkcji kwadratowej");
		
		printf("Podaj wartosc argumentu a:  "); scanf("%f"  ,&a);
		if(a==0)
		{
				printf("Wartosc a nie moze byc rowna 0\n");
			}else
			

		printf("Podaj wartosc argumentu b:  "); scanf("%f"  ,&b);
		printf("Podaj wartosc argumentu c:  "); scanf("%f"  ,&c);
			
			delta=0;
			delta=(b*b)-(4*a*c);
			printf("Delta wynosi: %f\n", delta);

	if(delta==0) {
			x0=-b/(2*a);
		printf(" Jeden punkt zerowy:x0= %f\n", x0);}
		else if(delta>0) {
			x1=(-b-delta)/(2*a);
			x2=(-b+delta)/(2*a);
 printf( "Dwa miejsca zerowe: x1= %f i x2=%f \n ",x1 ,x2);}
		else if (delta<0) { printf("Brak miejsc zerowych \n");}
		else {
	}


 return ( x1 ,x2, x0);

 }

