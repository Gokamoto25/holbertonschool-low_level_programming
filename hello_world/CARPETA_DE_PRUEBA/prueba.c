	#include <stdio.h>

	int main(void) {
		char c;
		int i=0;
		do{
			printf(Ingresa un caracter: " ");
			c = getchar();
			fflush(stdin);
			printf(El caracter ingresado es: " ");
			putchar(c);
			putchar('\n');
			putchar('\n');
			i++;
		}while(i<6);
		return 0;
	}
