#include <stdio.h>
#include <stdlib.h>


void main(void){
	

	float f = 0.1, v = 0, a = 0, z;
	int	i, b = 0, x;
	printf("\n\n");
	scanf("%i", &x);

	for(i = 1; i <=5; ++i){

        if (i == 1){

            f = 1;

        }

        else{
           
            v = v + (b/f);
            f = f * 10;

        }

        a = 0;

	if (i == 5){

            break;

        }

		for(b = 1; a < x; ++b){
				
			z = v + (b/f);
			a = z * z;

			if (a == x){

				v = b;
				goto termina;

			}
		}
		b = b - 2;
	}
		
	termina:
	printf("Raiz de %i = %.3f\n\n\n", x, v);

}
//Feito por Lucas Marques Silva
//facebook---> https://www.facebook.com/lucasulo
