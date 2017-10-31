#include <stdio.h>
 int kwadrat (int a, int b, int c, int wynik )
	{
		printf("Wynik funkcji: %i\n" , a*'x'^2 +b*'x' + c == wynik );
		return a*'x'^2 + b*'x' +c == wynik;
	}
int main (void)
{
 
       int a, b,c, wynik ;


		puts ("Program do funkcji kwadratowej");

		printf("Podaj wartosc argumentu a:  "); scanf("%i"  ,&a);
		printf("Podaj wartosc argumentu b:  "); scanf("%i"  ,&b);
		printf("Podaj wartosc argumentu c:  "); scanf("%i"  ,&c);


	if(wynik==0) {printf(" Jeden punkt zerowy \n");}
		else if(wynik >0) { printf( "Dwa miejsca zerowe \n ");}
		else if (wynik <0) { printf("Brak miejsc zerowych \n");}
		else {
	}


 return 0;

 }

